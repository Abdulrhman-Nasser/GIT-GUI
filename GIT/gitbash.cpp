#include "gitbash.h"
#include <QThread>
void GitBash::UpdateCombos(QStringList listadd, QStringList listreset, QString path)
{
    QString gitBashPath = "C:/Program Files/Git/git-cmd.exe"; // Change path as needed
    QProcess gitProcess;
    // Construct the arguments for Git Bash
    QStringList arguments;
    arguments  <<"cmd /c"<< "git branch";
    // Set the working directory
    gitProcess.setWorkingDirectory(path);
    // Start the process with the command
    gitProcess.start(gitBashPath,arguments);
    QStringList names;
    // Connect slots to read the output and error
    QMetaObject::Connection connection = connect(&gitProcess, &QProcess::readyReadStandardOutput, [&gitProcess,&names,&connection,this] {
        QByteArray data = gitProcess.readAllStandardOutput();
    // Convert QByteArray to QString
    QString input = QString::fromUtf8(data);

    // Define the regular expression to match the names
    QRegularExpression regex(R"([*\s]+(\S+))");
    QRegularExpressionMatchIterator i = regex.globalMatch(input);

    while (i.hasNext()) {
        QRegularExpressionMatch match = i.next();
        names << match.captured(1);
    }
    QObject::disconnect(connection);
    });
    gitProcess.waitForFinished(100);
    emit updateboxes(listadd,listreset,names);
}

GitBash::GitBash(QObject *parent)
    : QObject{parent}
{}

void GitBash::sendCommand(QString command, QString path)
{

    // Set Git Bash executable
    QString gitBashPath = "C:/Program Files/Git/git-cmd.exe"; // Change path as needed
    QProcess gitProcess;
    // Construct the arguments for Git Bash
    QStringList arguments;
    arguments  <<"cmd /c"<< command;
    // Set the working directory
    gitProcess.setWorkingDirectory(path);
    // Start the process with the command
    gitProcess.start(gitBashPath,arguments);
    // Connect slots to read the output and error
    connect(&gitProcess, &QProcess::readyReadStandardOutput, [&gitProcess,this] {
        QByteArray data = gitProcess.readAllStandardOutput();
        qDebug() << "Output:" << data;
        emit sendData(data);
    });

    connect(&gitProcess, &QProcess::readyReadStandardError, [&gitProcess,this] {
        qDebug() << "Error:" << gitProcess.readAllStandardError();
        // Disconnect the lambda after it is executed
    });

    gitProcess.waitForFinished(200);
}

bool GitBash::CheckGitInit(QString path)
{
    QDir dir(path);
    if(dir.exists())
    {
        foreach(QFileInfo L_dir, dir.entryInfoList(QDir::Filter::AllEntries | QDir::Hidden))
        {
            if(L_dir.isDir())
            {
                if(L_dir.fileName() == ".git")
                {
                    return true;
                }
            }
        }
    }
    else
    {
        qDebug()<<"Directory with path => "<<path<<" Doesn't exist!";
    }
    return false;

}
void GitBash::updateAddReset(QString path)
{
    QString gitBashPath = "C:/Program Files/Git/git-cmd.exe"; // Change path as needed
    QProcess gitProcess;
    // Construct the arguments for Git Bash
    QStringList arguments;
    arguments << "cmd /c" << "git status";
    // Set the working directory
    gitProcess.setWorkingDirectory(path);
    // Start the process with the command
    gitProcess.start(gitBashPath, arguments);
    QStringList untrackedFiles;
    QStringList trackedFiles;
    // Use a connection handle to allow manual disconnection
    QMetaObject::Connection connection;

    connection = connect(&gitProcess, &QProcess::readyReadStandardOutput, [&gitProcess, &untrackedFiles, &trackedFiles, this, &connection] {
        QByteArray data = gitProcess.readAllStandardOutput();
        // Getting all tracked and untracked files as QString lists

        // Convert QByteArray to QString
        QString input = QString::fromUtf8(data);
        qDebug() << "Git status output:\n" << input;

        // Define the regular expression to match the untracked files section
        QRegularExpression untrackedRegex(R"(Untracked files:\n.*?\n((?:\t.*?\n)+))");
        QRegularExpressionMatch untrackedMatch = untrackedRegex.match(input);

        // Define the regular expression to match the tracked files section
        QRegularExpression trackedRegex(R"(Changes to be committed:\n\s+\(use \"git (?:restore --staged|rm --cached) <file>...\" to unstage\)\n((?:\s+(new file|modified):\s+.*?\n)+))");
        QRegularExpressionMatch trackedMatch = trackedRegex.match(input);

        // Define the regular expression to match the changes not staged for commit section
        QRegularExpression notStagedRegex(R"(Changes not staged for commit:\n\s+\(use \"git add <file>...\" to update what will be committed\)\n\s+\(use \"git restore <file>...\" to discard changes in working directory\)\n((?:\s+modified:\s+.*?\n)+))");
        QRegularExpressionMatch notStagedMatch = notStagedRegex.match(input);

        if (untrackedMatch.hasMatch()) {
            QString untrackedFilesSection = untrackedMatch.captured(1);
            qDebug() << "Untracked files section:\n" << untrackedFilesSection;

            // Define the regular expression to match individual file names
            QRegularExpression fileRegex(R"(\t(.*?)\n)");
            QRegularExpressionMatchIterator i = fileRegex.globalMatch(untrackedFilesSection);

            while (i.hasNext()) {
                QRegularExpressionMatch fileMatch = i.next();
                untrackedFiles << fileMatch.captured(1);
            }
        }

        if (trackedMatch.hasMatch()) {
            QString trackedFilesSection = trackedMatch.captured(1);
            qDebug() << "Tracked files section:\n" << trackedFilesSection;

            // Define the regular expression to match individual tracked file names
            QRegularExpression trackedFileRegex(R"(\s+(new file|modified):\s+(.*?)\n)");
            QRegularExpressionMatchIterator i = trackedFileRegex.globalMatch(trackedFilesSection);

            while (i.hasNext()) {
                QRegularExpressionMatch fileMatch = i.next();
                trackedFiles << fileMatch.captured(2); // Capture the file name
            }
        }

        if (notStagedMatch.hasMatch()) {
            QString notStagedFilesSection = notStagedMatch.captured(1);
            qDebug() << "Changes not staged for commit section:\n" << notStagedFilesSection;

            // Define the regular expression to match individual not staged file names
            QRegularExpression modifiedFileRegex(R"(\s+modified:\s+(.*?)\n)");
            QRegularExpressionMatchIterator i = modifiedFileRegex.globalMatch(notStagedFilesSection);

            while (i.hasNext()) {
                QRegularExpressionMatch fileMatch = i.next();
                untrackedFiles << fileMatch.captured(1); // Append to untracked files as requested
            }
        }

        untrackedFiles << "All";
        trackedFiles << "All";
        qDebug() << "untracked files :" << untrackedFiles;
        qDebug() << "tracked files :" << trackedFiles;

        // Disconnect the lambda after it is executed
        QObject::disconnect(connection);
    });

    gitProcess.waitForFinished(100);
    UpdateCombos(untrackedFiles, trackedFiles, path);
}




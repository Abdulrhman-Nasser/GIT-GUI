#include "dirpath.h"

QString DirPath::getPath() const
{
    return path;
}

DirPath::DirPath(QObject *parent)
    : QObject{parent}
{
    path = QDir::currentPath();
    qDebug()<<path;
}

void DirPath::readPath()
{
    // Open a file dialog to get the file path from the user
    QString filePath = QFileDialog::getExistingDirectory(nullptr, "Select a file");

    // Check if the user canceled the dialog
    if (filePath.isEmpty()) {
        QMessageBox::critical(nullptr, "Error", "No file selected.");
        return;
    }

    // Transforming the file path
    path = filePath.replace("\\", "\\\\");

    // Displaying the transformed path
    qDebug() << "Transformed Path:" << path;
}

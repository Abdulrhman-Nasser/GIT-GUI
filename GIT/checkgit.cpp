#include "checkgit.h"

CheckGit::CheckGit(QObject *parent)
    : QObject{parent}
{}

bool CheckGit::CheckGitInit(QString path)
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

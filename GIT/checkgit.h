#ifndef CHECKGIT_H
#define CHECKGIT_H

#include <QObject>
#include <QDir>
#include <QFileInfo>
#include <QFileInfoList>
class CheckGit : public QObject
{
    Q_OBJECT
public:
    explicit CheckGit(QObject *parent = nullptr);
    static bool CheckGitInit(QString);
signals:
};

#endif // CHECKGIT_H

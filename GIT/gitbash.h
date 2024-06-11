#ifndef GITBASH_H
#define GITBASH_H

#include <QObject>
#include <QProcess>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QFileInfoList>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QStringList>
class GitBash : public QObject
{
    Q_OBJECT
    void UpdateCombos(QStringList listadd,QStringList listreset ,QString path);
public:
    explicit GitBash(QObject *parent = nullptr);
    void sendCommand(QString,QString);
    bool CheckGitInit(QString path);
signals:
    void sendData(QByteArray);
    void updateboxes(QStringList,QStringList,QStringList);
public slots:
    void updateAddReset(QString path);

};

#endif // GITBASH_H

#ifndef DIRPATH_H
#define DIRPATH_H

#include <QObject>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>

class DirPath : public QObject
{
    Q_OBJECT
    QString path;
public:
    explicit DirPath(QObject *parent = nullptr);
    void readPath();
    QString getPath() const;

signals:
};

#endif // DIRPATH_H

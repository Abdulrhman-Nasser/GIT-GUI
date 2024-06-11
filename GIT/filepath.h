#ifndef FILEPATH_H
#define FILEPATH_H

#include <QObject>

class FilePath : public QObject
{
    Q_OBJECT
    QString path;
public:
    explicit FilePath(QObject *parent = nullptr);

signals:
};

#endif // FILEPATH_H

#ifndef LOCALSTORAGE_H
#define LOCALSTORAGE_H

#include "user.h"
#include <QObject>
#include <QMap>
#include <QFile>

class localstorage : public QObject
{
    Q_OBJECT
public:
    explicit localstorage(QObject *parent = nullptr);

    QFile createFile(const QString& Path, const QString& filename, const QString& fileformat);

    void writeFile(const user& _user, const QFile& file);

signals:
};

#endif // LOCALSTORAGE_H

#include "localstorage.h"

localstorage::localstorage(QObject *parent)
    : QObject{parent}
{}

QFile localstorage::createFile(const QString& Path, const QString &filename, const QString &fileformat)
{

    QString FILE = Path + "/" + filename + fileformat;

    QFile file(FILE);

    if (!file.open(QIODevice::WriteOnly))
    {
        QDebug() << "Erro at creating file" << file.errorString();
        return QFile();
    }

    return file;

}

void localstorage::writeFile(const user &_user, const QFile& file)
{

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QDebug() << "Erro at opening file" << file.errorString();
        return;
    }

    QTextStream output(&file);
    output << "ID: " << *(_user.userId)
           << " User: " << *(_user.userName)
           << " Password: "
           << *(_user.userPass) << Qt::endl;

    file.close();

}

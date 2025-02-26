#ifndef USER_H
#define USER_H

#include <QObject>
#include <QMap>

class user : public QObject
{
    Q_OBJECT
public:
    explicit user(QObject *parent = nullptr);

    ~user() noexcept;

    void createUser(const QString& name, const QString& pass);


private:

    QMap<qint8, QString>* users;

    QString* userName;
    QString* userPass;
    qint8*   userId;

};

#endif // USER_H

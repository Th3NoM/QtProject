#include "user.h"
#include "localstorage.h"
#include "iostream"
#include "mutex"

std::mutex userMutex;

user::user(QObject *parent)
    : QObject{parent},
    userId(new qint(0)),
    userName(new QString()),
    userPass(new QString()),
    users(new QMap<qint, QString>())
{}

user::~user() noexcept
{
    delete userId;
    delete userName;
    delete userPass;
    delete users;
}

void user::createUser(const QString &name, const QString &pass)
{
    // garante que não ocorra race condition
    std::lock_guard<std::mutex> guard(userMutex);

    localstorage* LocalStorage = new localstorage();

    *userName = name;
    *userPass = pass;

    // o id será um id único
    *userId = users->isEmpty() ? 1 : users->lastKey() + 1;

    users->insert({*userId, *this});

    const QString PATH = "C:/Users/lirae/Desktop/bruno/";
    const QString FILE_NAME = "DADOS";
    const QString FILE_FORMAT = ".txt";

    LocalStorage->writeFile(*this, LocalStorage->createFile(PATH, FILE_NAME, FILE_FORMAT));

    delete LocalStorage;

}

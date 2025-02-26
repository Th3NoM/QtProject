#include "client.h"
#include "iostream"

client::client(QObject *parent)
    : QObject{parent},
    name(new QString()),
    subname(new QString()),
    CPF(new QString()),
    list(new QList<QString>())
{}

client::~client()
{
    delete name;
    delete subname;
    delete CPF;
    delete list;

    std::cout << "Client: memoria liberada" << std::endl;

}

client::client(const client&& other) noexcept
{
    if (this != &other)
    {
        name = new QString(*(other.name));
        subname = new QString(*(other.subname));
        CPF = new QString(*(other.CPF));
        list = new QList<QString>(*(other.list));
    }
    std::cout << "Movimentação: Construtor de cópia de movimentação chamado" << std::endl;
}

client& client::operator=(const client&& other) noexcept
{
    if (this != &other)
    {
        delete name;
        delete subname;
        delete CPF;
        delete list;

        name = new QString(*(other.name));
        subname = new QString(*(other.subname));
        CPF = new QString(*(other.CPF));
        list = new QList<QString>(*(other.list));

    }

    std::cout << "Movimentação: Operador de atribuição de movimentação chamado" << std::endl;

    return *this;

}

void client::addClient(const QString &_name, const QString &_subname, const QString &_cpf)
{
    *name = _name;
    *subname = _subname;
    *CPF = _cpf;

    list->append(*name);
    list->append(*subname);
    list->append(*CPF);

}

QString client::getClient(qint8 index) const
{
    return list->at(index);
}

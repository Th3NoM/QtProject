#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>

class client : public QObject
{
    Q_OBJECT
public:
    explicit client(QObject *parent = nullptr);

    ~client();

    // Construtor de movimentação
    client(const client&& other) noexcept;

    // Operador para permitir e retornar os valores movimentados
    client& operator=(const client&& other) noexcept;

    void addClient(const QString& _name, const QString& _subname, const QString& _cpf);

    QString getClient(qint8 index) const;

private:

    QString* name;
    QString* subname;
    QString* CPF;
    QList<QString>* list;

signals:
};

#endif // CLIENT_H

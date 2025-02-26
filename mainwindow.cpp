#include "mainwindow.h"
#include "client.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->submitBtn, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * Função para processar os dados do cliente para a movimentação
 */
void processClient(client&& _client, QWidget* parent)
{
    const QString NAME = _client.getClient(0);
    const QString SUBNAME = _client.getClient(1);
    const QString CPF = _client.getClient(2);

    QString ClientData = "Nome: " + NAME + "\nSobrenome: " + SUBNAME + "\nCPF: " + CPF;

    QMessageBox::information(parent, "Dados do cliente", ClientData);

}

void MainWindow::onButtonClicked()
{
    try {
        client Client;

        QString name = ui->clientName->text();
        QString subname = ui->clientSubname->text();
        QString cpf = ui->clientCPF->text();

        Client.addClient(name, subname, cpf);

        processClient(std::move(Client), this);

    } catch (...)
    {
        QMessageBox::information(this, "Aviso", "Preencha todos o fomulário");
    }

}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myClient= new Client();
    myClient->activateClient();
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    QString nodeOrigin =ui->lineEdit->text();
    this->originNode= nodeOrigin.toUtf8().constData();

    QString nodeDestiny =ui->lineEdit_2->text();
    this->destinyNode= nodeDestiny.toUtf8().constData();

    this->get_OD_Nodes();
}


string MainWindow::get_OD_Nodes(){
    string both= originNode+destinyNode;
    cout <<"both: "<< both;
    myClient->sendMessage(both);
    return both;
}

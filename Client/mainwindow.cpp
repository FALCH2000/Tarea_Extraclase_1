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

    string returnMessage= this->get_OD_Nodes();
    string allMessage= "Las distancias más cortas posibles son: \n"+returnMessage;

    QString str = QString::fromUtf8(allMessage.c_str());
    //
    ui->textEdit->setText(str);
}


string MainWindow::get_OD_Nodes(){
    string both= originNode+"-"+destinyNode;
    cout <<"both: "<< both;
    string returnMessage;
    returnMessage= myClient->sendMessage(both);
    return returnMessage;
}

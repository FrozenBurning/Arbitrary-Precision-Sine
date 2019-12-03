#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDoubleValidator* pReg = new QDoubleValidator;
    ui->inputx->setValidator(pReg);
    setWindowTitle("Numerical-Sine-Calculator");
    setFixedSize(this->width(), this->height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_inputx_returnPressed()
{
    clock_t start,end;
    double inputx = ui->inputx->text().toDouble();
    double myspeed,offspeed;
//    if(!inputx)
//    {
//        QMessageBox::warning(this, "Empty Input!", "请输入实数X！");
//    }
//    else
//    {
    int method = ui->methodtype->currentIndex();
    SinSolver solver(inputx);
    start = clock();
    double myresult = solver.solver_handler(method);
    end = clock();
    myspeed = double(end-start)*1000/CLOCKS_PER_SEC;
    start = clock();
    double officialresult = sin(inputx);
    end=clock();
    offspeed = double(end-start)*1000/CLOCKS_PER_SEC;
    ui->myresult->setText(QString::number(myresult,10,4));
    ui->Clibresult->setText(QString::number(officialresult,10,4));
    ui->myspeed->setText(QString::number(myspeed,10,5)+" ms");
    ui->libspeed->setText(QString::number(offspeed,10,5)+" ms");
//    }
}

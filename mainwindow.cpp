#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog_formulae.h"
#include "about.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("thickpipe");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    float p=ui->pr->text().toFloat();
    float d=ui->od->text().toFloat();
    float a=ui->df->text().toFloat();
    float e=ui->we->text().toFloat();
    float f=ui->ys->text().toFloat();
    float c=ui->allnce->text().toFloat();
    float hoop_allw=f/ui->sfc->text().toFloat();
    float E=ui->E->text().toFloat();
    float Y=ui->y->text().toFloat();
    float tois = p*d/(2*a*f*e+p)+c;
    float tmd=p*d/(2*hoop_allw*e)+c;
    float tma=p*d/(2*(f*E*e+ Y*p))+c;
    ui->to_is->setText(QString::number(tois,'f',2));
    ui->to_din->setText(QString::number(tmd,'f',2));
    ui->to_asme->setText(QString::number(tma,'f',2));
}

void MainWindow::on_action_Formulae_triggered()
{
    Dialog_formulae *m= new Dialog_formulae();
    m->show();

}

void MainWindow::on_actionAbout_triggered()
{
    about *a=new about();
    a->show();
}

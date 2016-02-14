#include "dialog_formulae.h"
#include "ui_dialog_formulae.h"

Dialog_formulae::Dialog_formulae(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_formulae)
{
    ui->setupUi(this);
    this->setWindowTitle("formulae used");
}

Dialog_formulae::~Dialog_formulae()
{
    delete ui;
}

void Dialog_formulae::on_pushButton_clicked()
{
    this->close();
}

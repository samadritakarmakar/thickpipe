#include "dialog_formulae.h"
#include "ui_dialog_formulae.h"

Dialog_formulae::Dialog_formulae(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_formulae)
{
    ui->setupUi(this);
}

Dialog_formulae::~Dialog_formulae()
{
    delete ui;
}

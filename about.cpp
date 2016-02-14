#include "about.h"
#include "ui_about.h"

about::about(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    this->setWindowTitle("about");
}

about::~about()
{
    delete ui;
}

void about::on_pushButton_clicked()
{
    this->close();
}

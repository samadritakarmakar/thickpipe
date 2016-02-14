#ifndef DIALOG_FORMULAE_H
#define DIALOG_FORMULAE_H

#include <QDialog>

namespace Ui {
class Dialog_formulae;
}

class Dialog_formulae : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_formulae(QWidget *parent = 0);
    ~Dialog_formulae();

private:
    Ui::Dialog_formulae *ui;
};

#endif // DIALOG_FORMULAE_H

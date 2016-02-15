#ifndef ERROR_DIALOG_H
#define ERROR_DIALOG_H

#include <QWidget>

namespace Ui {
class error_dialog;
}

class error_dialog : public QWidget
{
    Q_OBJECT

public:
    explicit error_dialog(QWidget *parent = 0);
    ~error_dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::error_dialog *ui;
};

#endif // ERROR_DIALOG_H

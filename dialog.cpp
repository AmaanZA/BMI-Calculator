#include "dialog.h"
#include "ui_dialog.h"
#include <QString>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_calculate_clicked()
{
    QString kilo= ui->input_kg->text();
    QString metre= ui->input_m->text();
    double bmi= kilo.toDouble()/ (metre.toDouble() * metre.toDouble());
    QString string_bmi= QString::number(bmi);
    ui->output_bmi->setText(string_bmi);

}


void Dialog::on_clear_all_clicked()
{
    ui->output_bmi->setText("");
    ui->input_kg->setText("");
    ui->input_m->setText("");
}


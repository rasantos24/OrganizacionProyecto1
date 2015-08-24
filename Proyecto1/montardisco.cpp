#include "montardisco.h"
#include "ui_montardisco.h"

MontarDisco::MontarDisco(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MontarDisco)
{
    ui->setupUi(this);
}

MontarDisco::~MontarDisco()
{
    delete ui;
}

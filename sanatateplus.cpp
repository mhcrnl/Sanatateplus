#include "sanatateplus.h"
#include "ui_sanatateplus.h"

Sanatateplus::Sanatateplus(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sanatateplus)
{
    ui->setupUi(this);
}

Sanatateplus::~Sanatateplus()
{
    delete ui;
}

#include "maforme.h"
#include "ui_maforme.h"

MaForme::MaForme(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MaForme)
{
    ui->setupUi(this);
}

MaForme::~MaForme()
{
    delete ui;
}

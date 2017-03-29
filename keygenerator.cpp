#include "keygenerator.h"
#include "ui_keygenerator.h"

KeyGenerator::KeyGenerator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KeyGenerator)
{
    ui->setupUi(this);
}

KeyGenerator::~KeyGenerator()
{
    delete ui;
}

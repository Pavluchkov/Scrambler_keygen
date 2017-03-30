#include "keygenerator.h"
#include "ui_keygenerator.h"
#include "QString"
#include "time.h"

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

void KeyGenerator::on_pushButton_Generate_clicked()
{
    srand(time(0));

    QString str[4];
    QString temp;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            temp += rand() % 26 + 65;
        }
        str[i] = temp;
        temp = "";
    }

    for(int i = 0; i < 4; i++){
        temp += str[i];
        if(i < 3)
            temp += "-";
    }
    ui->lineEdit_Key->setText(temp);
}

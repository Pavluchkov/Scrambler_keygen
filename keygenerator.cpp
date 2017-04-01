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
    int count = 0;

    for(int i = 0; i < 4; i++){
        do{
            count = 0;
            str[i] = "";
            for(int j = 0; j < 4; j++){
                int temp = rand() % 26 + 65;
                str[i] += temp;
                count += temp;
            }

        }while(count != 300);
    }

    QString temp;

    for(int i = 0; i < 4; i++){
        temp += str[i];
        if(i < 3)
            temp += "-";
    }
    ui->lineEdit_Key->setText(temp);
}

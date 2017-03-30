#ifndef KEYGENERATOR_H
#define KEYGENERATOR_H

#include <QDialog>

namespace Ui {
class KeyGenerator;
}

class KeyGenerator : public QDialog
{
    Q_OBJECT

public:
    explicit KeyGenerator(QWidget *parent = 0);
    ~KeyGenerator();

private slots:
    void on_pushButton_Generate_clicked();

private:
    Ui::KeyGenerator *ui;
};

#endif // KEYGENERATOR_H

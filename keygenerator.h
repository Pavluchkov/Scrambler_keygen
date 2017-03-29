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

private:
    Ui::KeyGenerator *ui;
};

#endif // KEYGENERATOR_H

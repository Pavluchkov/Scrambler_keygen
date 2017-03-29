#include "keygenerator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KeyGenerator w;
    w.show();

    return a.exec();
}

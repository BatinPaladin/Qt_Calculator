#include "polishnotation.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PolishNotation w;
    w.show();
    return a.exec();
}

#include "proyecto1organizacion.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Proyecto1Organizacion w;
    w.show();

    return a.exec();
}

#include "stdafx.h"
#include "guitabular.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    Guitabular w;
    w.show();
    return a.exec();
}

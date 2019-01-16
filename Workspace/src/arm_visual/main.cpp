#include "dialog.h"
#include <QApplication>
#include <QLabel>
#include <QPicture>
#include <QPainter>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();
}

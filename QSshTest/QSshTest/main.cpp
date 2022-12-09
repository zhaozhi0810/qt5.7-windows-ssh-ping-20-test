#include "Widget.h"
#include "sshtest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    Widget w;
//    w.show();
    sshtest sshw;

    sshw.show();


    return a.exec();
}

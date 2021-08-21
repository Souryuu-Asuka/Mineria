#include "Mineria.h"
#include "WorldScene.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mineria w;

    WorldScene scene;
    w.setScene(&scene);

    w.show();
    return a.exec();
}

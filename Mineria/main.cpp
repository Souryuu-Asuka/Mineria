#include "Mineria.h"
#include "WorldScene.h"
#include "Map.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mineria w;

    WorldScene scene;
    w.setScene(&scene);

    QGraphicsItemGroup* g = loadMap();

    scene.addItem(g);

    w.show();
    return a.exec();
}

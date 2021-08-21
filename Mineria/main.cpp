#include "Mineria.h"
#include "WorldScene.h"
#include "BlockBase.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mineria w;

    WorldScene scene;
    w.setScene(&scene);

    BlockBase* dirt = new BlockBase(Qt::red);
    dirt->setPos(10, 10);
    scene.addItem(dirt);

    w.show();
    return a.exec();
}

#include "Mineria.h"
#include "WorldScene.h"
#include "Blocks.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mineria w;

    WorldScene scene;
    w.setScene(&scene);

    QGraphicsItemGroup* g = new QGraphicsItemGroup();

    for (int i = 0; i < 10; i++)
    {
        Bedrock* br = new Bedrock();
        br->setPos(100, 100 + static_cast<qreal>(i) * 20);
        g->addToGroup(br);
    }

    scene.addItem(g);

    w.show();
    return a.exec();
}

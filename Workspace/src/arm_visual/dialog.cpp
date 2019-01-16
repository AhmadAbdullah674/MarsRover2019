#include "dialog.h"
#include "ui_dialog.h"
#include "myitem.h"
#include "myitem2.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    /*scene = new QGraphicsScene(this);

    ui->x_y_axis->setScene(scene);

    ui->x_y_axis->setRenderHint(QPainter::Antialiasing);

    scene->setSceneRect(0,0,150, 300);

    QLineF topLine(scene->sceneRect().topLeft(),
                   scene->sceneRect().topRight());
    QLineF leftLine(scene->sceneRect().topLeft(),
                   scene->sceneRect().bottomLeft());
    QLineF rightLine(scene->sceneRect().topRight(),
                   scene->sceneRect().bottomRight());
    QLineF bottomLine(scene->sceneRect().bottomLeft(),
                   scene->sceneRect().bottomRight());

    QPen myPen = QPen(Qt::red);

    scene->addLine(topLine, myPen);
    scene->addLine(leftLine, myPen);
    scene->addLine(rightLine, myPen);
    scene->addLine(bottomLine, myPen);
    //scene->addEllipse(scene->sceneRect(),myPen);

    MyItem *item = new MyItem();
    scene->addItem(item);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),scene, SLOT(advance()));
    timer->start(100);*/
    scene2 = new QGraphicsScene(this);

    ui->z_x_axsis->setScene(scene2);

    ui->z_x_axsis->setRenderHint(QPainter::Antialiasing);

    scene2->setSceneRect(0,0,600, 470);
    //qDebug()<<"width "<< ui->z_x_axsis->scene()->width()<<" height "<< ui->scene()->height()<<endl;
   /* QLineF topLine1(scene2->sceneRect().topLeft(),
                   scene2->sceneRect().topRight());
    QLineF leftLine1(scene2->sceneRect().topLeft(),
                   scene2->sceneRect().bottomLeft());
    QLineF rightLine1(scene2->sceneRect().topRight(),
                   scene2->sceneRect().bottomRight());
    QLineF bottomLine1(scene2->sceneRect().bottomLeft(),
                   scene2->sceneRect().bottomRight());

    QPen myPen2 = QPen(Qt::red);

    scene2->addLine(topLine1, myPen2);
    scene2->addLine(leftLine1, myPen2);
    scene2->addLine(rightLine1, myPen2);
    scene2->addLine(bottomLine1, myPen2);
    //scene->addEllipse(scene->sceneRect(),myPen);*/
    MyItem2 *item2[4];
    int c{300},b{235};
    for(int i=0;i<3;i++){
    item2[i] = new MyItem2(8);
    item2[i]->setposition(c+i*55,b-i*55);
    scene2->addItem(item2[i]);
    }
    //MyItem2 *item3 = new MyItem2(0);
    //item3->setposition(150,105);
    //scene2->addItem(item2);
    //scene2->addItem(item3);

}

Dialog::~Dialog()
{
    delete ui;
}

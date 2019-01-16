#include "myitem2.h"
#include <QDebug>
#include <QTime>
#include <QTimer>

MyItem2::MyItem2(int _init)
{
    // random start rotation
    //angle = (x % 360);
    //setRotation(angle);
    myinit=_init;
    // set the speed
   /* speed = 5;  // 5 pixels

    // random start position
    int startX = 0;
    int startY = 0;
    //qreal y = scene()->height()/2;
    //qreal x = scene()->width()/2;
    if(qrand() % 1)
    {
        startX = qrand() % 200;
        startY = qrand() % 200;
    }
    else
    {
        startX = qrand() % -100;
        startY = qrand() % -100;
    }

    setPos(mapToParent(startX, startY));*/
   // qreal y = scene()->height()/2;
    //qreal x = scene()->width()/2;
    //setPos(x,y);

}
int MyItem2::get_angle(){
    //testing but will be used
    return ((qrand() % 360));
}

QRectF MyItem2::boundingRect() const
{
    return QRectF(-220,-220,500,400);
}

void MyItem2::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QLineF rect = QLineF(0,0,55,55);
    QRectF sett(10,20,80.0,80.0);
    QPointF p(0,0);
    sett.moveCenter(p);
   // QLineF rect2 = QLineF(55,55,0,110);
    //QLineF rect3 = QLineF(-200,0,55,55);

    //qreal y = scene()->height()/2;
    //qreal x = scene()->width()/2;
    //qDebug()<<x<<" "<<y<<endl;
    // basic collision detection

   /* if(scene()->collidingItems(this).isEmpty())
    {
        // no collision
        QPen pen(Qt::green, 5);
        painter->setPen(pen);
    }
    else
    {
        // collision !!!
        QPen pen(Qt::red, 5);
        painter->setPen(pen);

        // set the position
        doCollision();
    }*/
    //setPos(x,y);
    QTime dieTime = QTime::currentTime().addMSecs( 2000 );
    while( QTime::currentTime() < dieTime )
    {;}
    doCollision();
    QPen pen(Qt::green, 5);
    painter->setPen(pen);
    if (myinit){
    //painter->setRenderHints(QPainter::Antialiasing);
    painter->drawLine(rect);}
    //painter->drawLine(rect2);
    //painter->drawLine(rect3);
    else{
    painter->drawArc(sett,-30*16,120*16);}

}

void MyItem2::advance(int phase)
{
    if(!phase) return;

    QPointF location = this->pos();

    setPos(mapToParent(0, -speed));
}

void MyItem2::doCollision()
{
        setRotation(get_angle());

}

void MyItem2::setposition(qreal x, qreal y){
    setPos(x,y);
}



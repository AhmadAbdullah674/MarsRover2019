#ifndef MYITEM2_H
#define MYITEM2_H


#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsItem>
class MyItem2 : public QGraphicsItem
{
public:
    MyItem2(int _init);
    QRectF boundingRect() const;
    void paint(QPainter *painter,
               const QStyleOptionGraphicsItem *option,
               QWidget *widget);

protected:
    void advance(int phase);

private:
    qreal angle, speed;
    int myinit;
    int get_angle();
    void doCollision();
public:
    void setposition(qreal x, qreal y);

};
#endif // MYITEM2_H

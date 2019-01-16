#ifndef STICK_NODE_H
#define STICK_NODE_H
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsItem>


class stick_node: public QGraphicsItem
{
public:
    stick_node();
    QRectF boundingRect() const;
    void paint(QPainter *painter,
               const QStyleOptionGraphicsItem *option,
               QWidget *widget);
protected:
    void advance(int phase);
private:
    qreal angle, speed;
    void doCollision();
};

#endif // STICK_NODE_H

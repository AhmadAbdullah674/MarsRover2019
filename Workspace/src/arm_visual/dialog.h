
#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>
#include <QGraphicsScene>
#include <QTimer>

namespace Ui {
class Dialog;
}

class Dialog : public QWidget
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QGraphicsScene *scene;
    QGraphicsScene *scene2;
    QTimer *timer;
};

#endif

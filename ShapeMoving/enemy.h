#ifndef ENEMY_H
#define ENEMY_H
#include <QGraphicsPixmapItem>
#include <QObject> //for handling signals and slots
#include <QList> //just like a c++ list, but you can use stream operator to insert things (list<<element)
#include <QPointF> //for points, f version is floating point, additional member functions (e.g. return angle)

class enemy: public QObject, public QGraphicsRectItem{
    Q_OBJECT //need to include QOBJECT macro

public:
    enemy(QGraphicsItem * parent=0); //always include the line in constructor, allows classes to have a parent, other programmers can give this a parent (or you)
    void rotateToPoint(QPointF p); //will take a point and get enemy to face that point

public slots:
    void move_forward();//slots are connected to Qtimer, this allows enemy to move forward periodically

private:
    QList<QPointF> points; //list of points
    QPointF destination; //point to travel towards
    int point_index; //which point are we at in list of points
};

#endif // ENEMY_H

#include "enemy.h"
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QTimer>
#include <qmath.h>
#include <QDebug>

enemy::enemy(QGraphicsItem *parent){
    // set graphics
    (this)->setRect(0,0,50,50);

    // set points
    points << QPointF(200,200) << QPointF(400,200); // move down-right then right
    point_index = 0;
    destination = points[0];
    rotateToPoint(destination);

    // connect timer to move_forward
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move_forward()));
    timer->start(150);
}

void enemy::rotateToPoint(QPointF p){
    QLineF ln(pos(),p);
    setRotation(-1 * ln.angle());
}

void enemy::move_forward(){
    // if close to dest, rotate to next dest
    QLineF ln(pos(),destination);
    if (ln.length() < 5){
        point_index++;
        if (point_index>=points.size()){
           // qDebug()<<"Damn bukiki, back at it again with the barakis!";
            return;
        }
        destination = points[point_index];
        rotateToPoint(destination);
    }

    // move enemy forward at current angle
    int STEP_SIZE = 5;
    double theta = rotation(); // degrees

    double dy = STEP_SIZE * qSin(qDegreesToRadians(theta));
    double dx = STEP_SIZE * qCos(qDegreesToRadians(theta));

    setPos(x()+dx, y()+dy);

}

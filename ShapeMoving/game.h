#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QMouseEvent>

class Game: public QGraphicsView{
public:
    // member functions
    Game();

    // member attributes
    QGraphicsScene * scene;
};

#endif // GAME_H

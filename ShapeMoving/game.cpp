#include <QGraphicsScene>
#include "enemy.h"
#include <QGraphicsView>
#include "game.h"


Game::Game(): QGraphicsView(){
    //create a scene
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,800,600);

    //set the scene
    setScene(scene);

    //alter window
    setFixedSize(800,600);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //make an enemy
    enemy * enemy1 = new enemy();
    scene->addItem(enemy1);
}

#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QDebug>

#include "../views/image.h"
#include "../views/text.h"
#include "../views/button.h"

#include "event.h"

class Window;

class Game : public QGraphicsView
{
public:
    Game(Window *parent = 0);
    void click(const Event event);
private:
    QGraphicsScene *scene;
    Event lastEvent;
    Image *lastImage;
};

#endif // GAME_H

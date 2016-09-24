#ifndef BUTTON_H
#define BUTTON_H

#include "text.h"

#include "../components/event.h"

class Game;

class Button : public Text
{
public:
    Button(const QString &text, Game *game, const Event event);
protected:
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *);
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *);
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *);
private:
    Game *game;
    Event event;
};

#endif // BUTTON_H

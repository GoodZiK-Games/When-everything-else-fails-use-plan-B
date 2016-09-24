#include "button.h"
#include "../components/game.h"

Button::Button(const QString &text, Game *game, const Event event)
    : Text(text)
    , game(game)
    , event(event)
{
    setCursor(QCursor(Qt::PointingHandCursor));
    setDefaultTextColor(QColor(255, 255, 82));
}

void Button::hoverEnterEvent(QGraphicsSceneHoverEvent *)
{
    setDefaultTextColor(QColor(255, 255, 0));
}

void Button::hoverLeaveEvent(QGraphicsSceneHoverEvent *)
{
    setDefaultTextColor(QColor(255, 255, 82));
}

void Button::mousePressEvent(QGraphicsSceneMouseEvent *)
{
    game->click(event);
}


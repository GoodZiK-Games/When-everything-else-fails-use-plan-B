#include "item.h"

Item::Item(const QString &text)
    : QGraphicsTextItem(text)
{
    setFont(QFont("Times", 13, QFont::Bold));
}

void Item::setNumber(int number)
{
    setPos(10, 600 - (HEIGTH * number));
}

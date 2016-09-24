#ifndef ITEM_H
#define ITEM_H

#include <QGraphicsTextItem>
#include <QFont>
#include <QCursor>
#include <QDebug>

class Item : public QGraphicsTextItem
{
public:
    Item(const QString &text);
    void setNumber(int number);
protected:
    const int HEIGTH = 30;
};

#endif // ITEM_H

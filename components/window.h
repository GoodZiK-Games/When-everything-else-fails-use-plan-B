#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include "game.h"

class Window : public QMainWindow
{
    Q_OBJECT

public:
    Window(QWidget *parent = 0);

private:
    Game *game;
};

#endif // WINDOW_H

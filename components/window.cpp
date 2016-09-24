#include "window.h"

Window::Window(QWidget *parent)
    : QMainWindow(parent)
    , game(new Game(this))
{
    setFixedSize(802, 602);
    setWindowTitle("When everything else fails use plan B");
    game->show();
}

#include "text.h"

Text::Text(const QString &text)
    : Item(text)
{
    setDefaultTextColor(QColor(255, 255, 255));
}

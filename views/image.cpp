#include "image.h"

Image::Image(const QString &fileName)
    : QGraphicsRectItem()
    , brush()
    , fileName(fileName)
{
    brush.setTextureImage(QImage(":/content/" +fileName));
    setBrush(brush);
    setRect(brush.textureImage().rect());
    setPen(QPen(Qt::NoPen));
}

const QString Image::getFileName() const
{
    return fileName;
}

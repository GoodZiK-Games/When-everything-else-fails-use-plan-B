#ifndef IMAGE_H
#define IMAGE_H

#include <QGraphicsRectItem>
#include <QBrush>
#include <QImage>
#include <QPen>

class Image : public QGraphicsRectItem
{
public:
    Image(const QString &fileName);
    const QString getFileName() const;
private:
    QBrush brush;
    QString fileName;
};

#endif // IMAGE_H

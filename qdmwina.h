#ifndef QDMWINA_H
#define QDMWINA_H

#include <QMainWindow>
#include <qwidget.h>
#include <QTextCodec>
#include "mapapi.h"
#include "common.h"

class QDMapViewWindow : public QWidget
{
    Q_OBJECT

public:
    QDMapViewWindow(QWidget *parent = 0);
    ~QDMapViewWindow();
    void openMap(QString path, MapData* data);
    void closeMap();
private:
    HMAP map;
    QTextCodec* KOI8UCodec;
    void PixelToGeo(const long int x, const long int y,
                    double &lat, double &lon);    
};

#endif

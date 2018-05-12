#ifndef COMMON_H
#define COMMON_H

#include <QStringList>

struct MapData{
    QString mapName;
    long int widthInPixel;
    long int heightInPixel;
    long int scale;
    QStringList layers;
    long int sheetCount;
    QStringList sheets;
    double latNW;
    double lonNW;
    double latSW;
    double lonSW;
    double latNE;
    double lonNE;
    double latSE;
    double lonSE;
    void clearStructList(){
        layers.clear();
        sheets.clear();
    }
};
#endif // COMMON_H

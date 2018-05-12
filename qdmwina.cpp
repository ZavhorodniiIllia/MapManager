#include <qfiledialog.h>
#include <qdebug.h>
#include "qdmwina.h"
#include "qdebug.h"
#include "mapapi.h"
#include "xcontext.h"
#include "gsslink.h"

QDMapViewWindow::QDMapViewWindow(QWidget *parent)
{
    gssLink();
    map = 0;
    KOI8UCodec = QTextCodec::codecForName("KOI8-U");
}

QDMapViewWindow::~QDMapViewWindow()
{
  if (map != 0)
  {
    mapCloseData(map);
    map = 0;
  }
}


void QDMapViewWindow::openMap(QString path, MapData* data)
{
    if (map != 0) mapCloseData(map);
    map = 0;

    if (!data) return;

    map = mapOpenData(path.toLatin1().data(), 0);

    if (map){
       long int	mapW, mapH;
       mapGetPictureSize(map, &mapW, &mapH );
       data->widthInPixel = mapW;
       data->heightInPixel = mapH;

       PixelToGeo(0,0,data->latNW,data->lonNW);
       PixelToGeo(0,mapH,data->latSW,data->lonSW);
       PixelToGeo(mapW,0,data->latNE,data->lonNE);
       PixelToGeo(mapW,mapH,data->latSE,data->lonSE);

       data->mapName = QString(mapGetMainName(map));
       data->scale = mapGetShowScale(map);

       //layers
       int count = mapGetLayerCount(map);
       if (data->layers.isEmpty() == false) {
        data->layers.clear();
       }
       for(int i = 0; i < count; i++){
           QString layer = KOI8UCodec->toUnicode(mapGetLayerName(map,i));
           data->layers.append(layer);
       }

       //sheets
       data->sheetCount = mapGetListCount(map);
       QString sheet = KOI8UCodec->toUnicode(mapGetListName(map,1));
       data->sheets.append(sheet);
    }
}

void QDMapViewWindow::PixelToGeo(const long x, const long y, double &lat, double &lon)
{
    if (lat && lon){
        lat = (double)x;
        lon = (double)y;
        mapPictureToPlane(map, &lat, &lon);
        mapPlaneToGeo(map, &lat, &lon);
        lat = lat*180/M_PI;
        lon = lon*180/M_PI;
    }
}

void QDMapViewWindow::closeMap()
{
    mapCloseMap(map);
}



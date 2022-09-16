#ifndef TEMPHUMIDVIEW_H
#define TEMPHUMIDVIEW_H

#include "LCD.h"


class TempHumidView
{
private:
    LCD *lcd;

public:
    TempHumidView(LCD *lcd);
    virtual ~TempHumidView();
    void setTempHumidData(float temp, float humid);
    void setTempData(float temp);

};

#endif


#include "gridColorPicker.h"

gridColorPicker::gridColorPicker(HSLAPixel gridColor, int gridSpacing)
{
    color = gridColor;
    spacing = gridSpacing;
}

HSLAPixel gridColorPicker::operator()(int x, int y)
{
    if (x % spacing == 0 || y % spacing == 0) {
        return color;
    } else {
        HSLAPixel ret;
        ret.h = 0.; ret.s = 0.; ret.l = 1.;
        return ret;
    }
}

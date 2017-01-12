#include "shape.h"

HANDLE dot;

void color(int colorCode)
{
    dot=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(dot, colorCode);
}

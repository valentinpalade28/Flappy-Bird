#include "shape.h"

void timer()
{
    while(true)
    {
        Sleep(1000);
        if(seconds==60)
        {
            ++minutes;
            seconds=0;
        }
        ++seconds;
    }
}

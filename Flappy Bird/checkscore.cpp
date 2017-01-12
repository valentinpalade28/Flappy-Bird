#include "shape.h"

void checkscore()
{
    int y;
    for(y=0;y<20;y++)
    {
        if(c[birdx][y]=='|')
        {
            score++;
            return;
        }
    }
}

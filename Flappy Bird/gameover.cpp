#include "shape.h"

bool gameover()
{
    if(birdy>19)
    {
        c[birdx][19]='*';
        c[birdx][20]='-';
        return true;
    }
    else
    {
        if(n[birdx][birdy]>0 && (c[birdx][birdy]=='|' || c[birdx][birdy]=='*'))
        {
            c[birdx][birdy]='|';
            c[birdx-1][19]='*';
            return true;
        }
    }
    return false;
}

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
        if(n[birdx][birdy]==2 && (c[birdx][birdy]=='|' || c[birdx][birdy]=='*'))
        {
            if(cond==1)
            {
                c[birdx][birdy]='*';
                c[birdx-1][19]=' ';
                return false;
            }
            c[birdx][birdy]='|';
            c[birdx-1][19]='*';
            return true;
        }
        else if(n[birdx][birdy]==3 && (c[birdx][birdy]=='<' || c[birdx][birdy]=='*'))
        {
            c[birdx][birdy]='*';
            c[birdx-1][19]=' ';
            cond=0;
        }
        else if(n[birdx][birdy]==4 && (c[birdx][birdy]=='=' || c[birdx][birdy]=='*'))
        {
            c[birdx][birdy]='*';
            c[birdx-1][19]=' ';
            cond=1;
        }
        else if(n[birdx][birdy]==5 && (c[birdx][birdy]=='>' || c[birdx][birdy]=='*'))
        {
            c[birdx][birdy]='*';
            c[birdx-1][19]=' ';
            cond=2;
        }
    }
    return false;
}

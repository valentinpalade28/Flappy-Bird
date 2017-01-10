#include "shape.h"

void pipes()
{
    int x,y,r;
    if(t==10)
    {
        r=(rand()%11)+5;
        for(y=0;y<20;y++)
        {
            c[29][y]='|';
        }
        c[29][r-1]=' ';
        c[29][r]=' ';
        c[29][r+1]=' ';
        n[29][r-1]=0;
        n[29][r]=0;
        n[29][r+1]=0;
        t=0;
        goto mv;
    }
    else goto mv;
    mv:
    {
        for(y=0;y<20;y++)
        {
            for(x=0;x<30;x++)
            {
                if(c[x][y]=='|')
                {
                    if(x>0)
                    {
                        c[x-1][y]='|';
                        n[x-1][y]=2;
                        c[x][y]=' ';
                        n[x][y]=0;
                    }
                    if(x==0)
                    {
                        c[x][y]=' ';
                        n[x][y]=0;
                    }
                }
            }
        }
    }
}

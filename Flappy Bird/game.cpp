#include "shape.h"

void game()
{
    int x,y;
    for(y=0;y<21;y++)
    {
        for(x=0;x<30;x++)
        {
            if(y<20)
            {
            c[x][y]=' ';
            }
            if(y==20)
            {
                c[x][y]='-';
            }
        }
    }
    c[10][10]='*';
    screen();
    char s;
    int var=10;
    while(var)
    {
        s='~';
        Sleep(0.2*1000);
        if(kbhit())
        {
            s=getch();
            if(s!='~') k=1;
        }
        for(x=0;x<30;x++)
        {
            c[x][20]='-';
        }
        bird();
        screen();

        if(k>0) k++;
        if(k==3) k=0;
        var--;
    }
}

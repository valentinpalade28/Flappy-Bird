#include "shape.h"

void screen()
{
    int x,y;
    system("cls");
    for(y=0;y<21;y++)
    {
        for(x=0;x<30;x++)
        {
            if(x<29) cout<<c[x][y];
            if(x==29) cout<<c[x][y]<<endl;
        }
    }

}

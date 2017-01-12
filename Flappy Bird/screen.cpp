#include "shape.h"

void screen()
{
    int x,y;
    system("cls");
    for(y=0;y<21;y++)
    {
        for(x=0;x<30;x++)
        {
            color(10);
            if(x<29) cout<<c[x][y];
            if(x==29) cout<<c[x][y]<<endl;
        }
    }
    cout<<""<<endl;
    seconds=endTime-startTime;
    if(seconds>=60)
    {
        minutes++;
        seconds-=60;
        cout<<"Your Time: "<<minutes<<" Minutes and "<<seconds<<" Seconds"<<endl;
    }
    else if(minutes>0)
    {
        cout<<"Your Time: "<<minutes<<" Minutes and "<<seconds<<" Seconds"<<endl;
    }
    else cout<<cout<<"Your Time: "<<seconds<<" Seconds"<<endl;
    cout<<"Your Score: "<<score<<" Points"<<endl;
}

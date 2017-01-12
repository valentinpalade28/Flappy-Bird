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
            n[x][y]=0;
            }
            if(y==20)
            {
                c[x][y]='-';
                n[x][y]=2;
            }
        }
    }
    c[10][10]='*';
    screen();
    char s;
    minutes=0;
    seconds=0;
    startTime=time(NULL);
    while(1)
    {
        s='~';
        Sleep(0.2*1000);
        t++;
        if(kbhit())
        {
            s=getch();
            if(s!='~') k=1;
        }
        for(x=0;x<30;x++)
        {
            c[x][20]='-';
            n[x][20]=2;
        }
        bird();
        checkscore();
        if(gameover()==true)
        {
            if(score>highscore) highscore=score;
            if(err==false)
            {
                gin.open("C:\\Flappy Bird\\highscore.txt");
                gin<<highscore;
                gin.close();
            }
            endgame();
            return;
        }
        pipes();
        endTime=time(NULL);
        if(score>highscore) highscore=score;
        screen();
        if(k>0) k++;
        if(k==3) k=0;
    }
    return;
}

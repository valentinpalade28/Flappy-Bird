#include "shape.h"

void pipes()
{
    int x,y,r,z;
    if(t==10)
    {
        if(score%3==0&&score>0)
        {
            z=rand()%3;
            if(z==0)
            {
                r=(rand()%11)+5;
                for(y=0;y<20;y++)
                {
                    c[29][y]='|';
                }
                c[29][r-1]=' ';
                c[29][r]='<';
                c[29][r+1]=' ';
                n[29][r-1]=0;
                n[29][r]=3;
                n[29][r+1]=0;
                t=0;
                goto mv;
            }
            else if(z==1)
            {
                r=(rand()%11)+5;
                for(y=0;y<20;y++)
                {
                    c[29][y]='|';
                }
                c[29][r-1]=' ';
                c[29][r]='=';
                c[29][r+1]=' ';
                n[29][r-1]=0;
                n[29][r]=4;
                n[29][r+1]=0;
                t=0;
                goto mv;
            }
            else if(z==2)
            {
                r=(rand()%11)+5;
                for(y=0;y<20;y++)
                {
                    c[29][y]='|';
                }
                c[29][r-1]=' ';
                c[29][r]='>';
                c[29][r+1]=' ';
                n[29][r-1]=0;
                n[29][r]=5;
                n[29][r+1]=0;
                t=0;
                goto mv;
            }
        }
        else
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
                else if(c[x][y]=='<')
                {
                    if(x>0)
                    {
                        c[x-1][y]='<';
                        n[x-1][y]=3;
                        c[x][y]=' ';
                        n[x][y]=0;
                    }
                    if(x==0)
                    {
                        c[x][y]=' ';
                        n[x][y]=0;
                    }
                }
                else if(c[x][y]=='=')
                {
                    if(x>0)
                    {
                        c[x-1][y]='=';
                        n[x-1][y]=4;
                        c[x][y]=' ';
                        n[x][y]=0;
                    }
                    if(x==0)
                    {
                        c[x][y]=' ';
                        n[x][y]=0;
                    }
                }
                else if(c[x][y]=='>')
                {
                    if(x>0)
                    {
                        c[x-1][y]='>';
                        n[x-1][y]=5;
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

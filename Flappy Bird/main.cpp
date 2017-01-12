#include "shape.h"

int main()
{
    fin.open("C:\\Flappy Bird\\highscore.txt");
    if(fin.is_open())
    {
        fin>>highscore;
        fin.close();
        err=false;
    }
    else
    {
        highscore=0;
        err=true;
    }
    char sl;
    int nr=0;
    while(1)
    {
        if(nr>0)
        {
            score=0;
            cout<<"Do you want to play again? [y/n] "<<endl;
            cin>>sl;
            if(sl=='n'||sl=='N') goto quit;
            else goto play;
        }
        menu();
        cin>>sl;
        switch(sl)
        {
            case '1':
            {
                play:
                game();
                break;
            }
            case '2':
            {
                goto quit;
                break;
            }
            default:
            {
                goto play;
                break;
            }
        }
        nr++;
    }
    quit:
    {
        cout<<"You have left the game."<<endl<<endl;
    }
    return 0;
}

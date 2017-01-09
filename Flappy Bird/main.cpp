#include "shape.h"

int main()
{
    char sl;
    menu();
    cin>>sl;
    switch(sl)
    {
        case '1':
        {
            play:
            //game();
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

    quit:
    {
        cout<<"You have left the game.";
    }
    return 0;
}

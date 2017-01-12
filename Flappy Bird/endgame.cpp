#include "shape.h"

void endgame()
{
    system("cls");
    color(12);
    cout<<""<<endl<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"X                                                                         X"<<endl;
    cout<<"X    *****      *     *       * ******       ****  *       ****** ****    X"<<endl;
    cout<<"X   *          * *    * *   * * *           *    *  *     * *     *   *   X"<<endl;
    cout<<"X   *  ****   *   *   *  * *  * *****       *    *   *   *  ****  ****    X"<<endl;
    cout<<"X   *  *  *  *******  *   *   * *           *    *    * *   *     * *     X"<<endl;
    cout<<"X    *****  *       * *       * ******       ****      *    ***** *   *   X"<<endl;
    cout<<"X                                                                         X"<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<""<<endl<<endl;
    if(minutes>0)
    {
        cout<<"                        Y O U R   T I M E : "<<minutes<<" Minutes and "<<seconds<<" Seconds"<<endl<<endl;
    }
    else cout<<"                        Y O U R   T I M E : "<<seconds<<" Seconds"<<endl<<endl;
    cout<<"                        Y O U R   S C O R E : "<<score<<endl<<endl;
}

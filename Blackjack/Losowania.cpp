#include "Karty.h"
int Karty::losowanie(int c)
{

    int pa, pb;
        do
    {
    pa=rand()%13;
    pb=rand()%4;
    karty[c-1]=tab[pa][pb];
    }while(tab[pa][pb]<2);
    tab[pa][pb]=-1;
    return 0;
}

#include "Karty.h"
 int Karty::sumowanie()
 {
     cout<<"Suma kart gracza: "<<suma<<endl;
     return suma;
 }
 int Karty::sumowanie1()
 {
     cout<<"Suma kart krupiera: "<<suma1<<endl;
     return suma1;
 }
 int Karty::ktowygral(int a)
 {
     suma1=a;
     if (suma==suma1)
        {
            cout<<"Remis"<<endl;
            return 3;}
     else if ((suma>suma1)&&(suma<=21))
        {
            cout<<"Wygral gracz "<<endl;
            return 1;
     }
    else if ((suma1>suma)&&(suma1<=21))
        {
            cout<<"Wygral krupier "<<endl;
            return 2;}
    else if ((suma>suma1)&&(suma>21))
     {
            cout<<"Wygral krupier "<<endl;
            return 2;
     }
    else if ((suma1>suma)&&(suma1>21))
          {
            cout<<"Wygral gracz "<<endl;
            return 1;
     }
}

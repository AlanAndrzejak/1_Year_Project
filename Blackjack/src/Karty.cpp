#include "Karty.h"


 Karty::Karty()
{
        for (int i=0; i<=3;i++)
        {
        for (int k=0;k<=12;k++)
            {
             tab[k][i]=k+2;
            }
            }
            suma=0, suma1=0, podbicie=50, d=0;
}
Karty::~Karty(){}
Gracz::~Gracz(){}
Krupier::~Krupier(){}
 void Karty::kart(int c,int d, int e)
 {
     if(e==1){
     if(c<=10){cout<<d<<" Karta gracza: "<<c<<endl;}
     if(c==11){cout<<d<<" Karta gracza: "<<"J"<<endl;}
     if(c==12){cout<<d<<" Karta gracza: "<<"Q"<<endl;}
     if(c==13){cout<<d<<" Karta gracza: "<<"K"<<endl;}
     if(c==14){cout<<d<<" Karta gracza: "<<"A"<<endl;}}
     else if(e==0){
     if(c<=10){cout<<d<<" Karta krupiera: "<<c<<endl;}
     if(c==11){cout<<d<<" Karta krupiera: "<<"J"<<endl;}
     if(c==12){cout<<d<<" Karta krupiera: "<<"Q"<<endl;}
     if(c==13){cout<<d<<" Karta krupiera: "<<"K"<<endl;}
     if(c==14){cout<<d<<" Karta krupiera: "<<"A"<<endl;}
     }
 }

 int Karty::ustaw(int a)
 {
     pula=a;
 }

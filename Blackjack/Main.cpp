#include <iostream>
#include <stdlib.h>
#include "Karty.h"

using namespace std;

int main(){
const int g=1, k=0;
int koniec, pieniadze=5000;
do{
system("cls");
int e,a=0,globalna=3,globalna1=1, t=1, p;
srand( time( NULL ) );
//Karty K;
Gracz G;
Krupier Kr;
G.ustaw(pieniadze);
G.Pkonsola();
system("cls");
Kr.losowanie(1); //wylosuj 1 karte Krupiera
Kr.kart(Kr.karty[0], 1, k); //Wyswietl 1 karte Krupiera
G.losowanie(1);//wylosuj 1 karte Gracza
G.kart(G.karty[0], 1, g);//Wyswietl 1 karte Gracza
G.losowanie(2);//wylosuj 2 karte Gracza
G.kart(G.karty[1], 2, g);//Wyswietl 2 karte Gracza
G.sprawdzenie(G.karty[0], 2); //Sumuj 1 karte Gracza
G.sprawdzenie(G.karty[1], 2);//Sumuj 2 karte Gracza
Kr.sprawdzenie1(Kr.karty[0], 2); //Sumuj karty krupiera
do{

Kr.sumowanie1(); //Suma kart Krupiera
if(G.sumowanie()>=21||G.dolary(2)<0){a=3;} //Suma kart Gracza
else{
G.Pstawki();
G.konsola();
cin>>e;

system("cls"); //PIERWSZE CZYSZCZENIE

switch(e){
case 1:
    {
    a=3; // wyjscie z petli
    break;
    }
case 2:
    {
    G.losowanie(globalna); //Losuj ita karte Gracza
    G.sprawdzenie(G.karty[globalna-1], 2); //Sumuj karte gracza
    G.konsola1();
    system("cls");
    Kr.kart(Kr.karty[0], 1, k);
    for(int k=0;k<globalna;k++){
    G.kart(G.karty[k], k+1, g);} //wyswietl karty
        globalna+=1; //zwieksz ilosc kart o 1

    break;

    }
    case 3:
    {

     G.losowanie(globalna); //Losuj ita karte
     G.sprawdzenie(G.karty[globalna-1], 2); // sumuj karty gracza
     Kr.kart(Kr.karty[0], 1, k); // wyswietl karte Krupiera
     for(int k=0;k<globalna;k++){
     G.kart(G.karty[k], k+1, g); // wyswietl karty gracza
     }
     globalna+=1; //zwieksz ilosc kart o 1

     break;}

    }}
}while(a<2);
do{
if (t==1){
Kr.kart(Kr.karty[globalna1-1], t, k);}// pokaz karty
t++;
Kr.losowanie(globalna1+1); //losuj 2 karte
Kr.kart(Kr.karty[globalna1], t, k); // pokaz karte
Kr.sprawdzenie1(Kr.karty[globalna1],2); //sumuj karty
globalna1++; //jeszcze 1 karta
}while(Kr.sprawdzenie1(0,2)<=16);
system("cls");
G.Ppula();
G.Pstawki();
G.sumowanie(); //pokaz sume kart
p=G.ktowygral(Kr.sumowanie1());
if(p==3){pieniadze=G.dolary(3);}
else if(p==1){pieniadze=G.dolary(1);}
else if(p==2){pieniadze=G.dolary(2);}
if(G.dolary(2)<50){cout<<"Przegrales!"<<endl;
    cout<<"Czy chcesz zagrac jeszcze raz? \n1=tak"<<endl;
    cin>>p;
    system("cls");
if (p==1){pieniadze=5000;}
else {koniec=0;}
}
else{
cout<<"Jezeli chcesz zakonczyc wpisz 0: ";
cin>>koniec;}

}while(koniec!=0);
}

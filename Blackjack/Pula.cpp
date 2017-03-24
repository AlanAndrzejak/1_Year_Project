#include "Karty.h"

using namespace std;

    void  Gracz::konsola1(){
    do{
        cout<<"Aktualna stawka:"<<podbicie<<endl;
        cout<<"posiadasz:"<<pula<<endl;
    cout<<"Podaj podbicie: ";
    cin>>d;
    system("cls");
    }while(d>pula||d<0);
    podbicie+=d;
    pula-=d;
    }

    void  Gracz::Pstawki()
    {
    cout<<"Aktualna stawka: "<<podbicie<<endl;
    }

    void Gracz::Ppula()
    {
    cout<<"Na koncie gracza zostalo: "<<pula<<endl;
    }
    void Gracz::konsola()
{
    cout<<"Do wyboru sa 3 opcje: "<<endl;
    cout<<"1.Pass"<<endl<<"2.Podbicie beta z doborem karty"<<endl<<"3.Dobor karty"<<endl;
}

 void  Gracz::Pkonsola(){
     pula-=50;
    do{
        cout<<"Aktualna stawka:"<<podbicie<<endl;
        cout<<"posiadasz:"<<pula<<endl;
    cout<<"Podaj podbicie: ";
    cin>>d;
    system("cls");
    }while(d>pula||d<0);
    podbicie+=d;
    pula-=d;
    }

 int Gracz::dolary(int a)
 {
 if (a==1){pula=pula+2*podbicie;}
 if (a==2){}
 else if(a==3){pula+=podbicie;}
 return pula;
 }

#ifndef KARTY_H
#define KARTY_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Karty
{
    public:
       Karty();
      int karty[9];
      int sumowanie();
      int  sumowanie1();
      int ustaw(int a);
      void  kart(int c, int d,int e);
      int  sprawdzenie(int c, int d);
      int  sprawdzenie1(int c, int d);
      int  losowanie(int c);
      int  wynik(int a);
      int  ktowygral(int a);
      virtual ~Karty();
    protected:
        int tab[13][4];
        int suma, suma1;
        int podbicie;
        int d;
        int pula;
    private:
};
class Gracz:virtual public Karty
{
    public:
    void Pkonsola();
    void konsola1();
    void konsola();
    void Pstawki();
    void Ppula();
    int dolary(int a);
    int dzialanie(int c, int d);
    ~Gracz();
    protected:
    private:



};
class Krupier: virtual public Karty
{
    public:
        ~Krupier();
    protected:
    private:

};

#endif

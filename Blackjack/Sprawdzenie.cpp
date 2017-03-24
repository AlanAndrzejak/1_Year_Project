#include "Karty.h"

  int Karty::sprawdzenie(int c, int d)
 {
     if (c<=10){suma+=c;}
     if (c>=11&&c<14){ suma+=10;}
     if (c==14&&d!=1){suma+=11;}
     return suma;
 }
  int Karty::sprawdzenie1(int c, int d)
 {
     if (c<=10){suma1+=c;}
     if (c>=11&&c<14){ suma1+=10;}
     if (c==14&&d!=1){suma1+=11;}
     return suma1;
 }

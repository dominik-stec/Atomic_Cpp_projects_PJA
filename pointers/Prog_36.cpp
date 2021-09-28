/*==============================================*/
/*  Odejmowanie wskaznikow                      */
/*==============================================*/

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;
//------------------------------------------------
int main ()
{
  int Tab[15];
  int *Wsk_a, *Wsk_b, *Wsk_c;
     
    Wsk_a = &Tab[5];
    Wsk_b = &Tab[10];
    Wsk_c = &Tab[11];
    cout <<   "(Wsk_b - Wsk_a) = " << (Wsk_b - Wsk_a)
		 << "\n(Wsk_c - Wsk_b) = " << (Wsk_c - Wsk_b)
		 << "\n(Wsk_a - Wsk_c) = " << (Wsk_a - Wsk_c)
		 << "\n(Wsk_c - Wsk_a) = " << (Wsk_c - Wsk_a)
		 << endl;
    _getch();
    return 0;
}
//--------------------------------------------------


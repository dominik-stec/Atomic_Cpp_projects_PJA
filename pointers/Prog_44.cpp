/*===============================================*/
/*  Staly wskaznik do stalej                     */
/*===============================================*/

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;
//------------------------------------------------
int main ()
{
 int m = 6,
     n = 4,
     tmp;
 const int *const wsk = &m;

   tmp = *wsk;		// odczytanie wartosci z obiektu pokazywanego
   //*wsk = 15;		// ZLE: nielegalna proba zapisu do obiektu stalego

   //wsk = &n;		// Zle: nielegalna proba przesuniecia
					// wskaznika na inny obiekt niz m
   cout << "tmp = " << tmp << ", *wsk = " << *wsk << endl;
   _getch();
   return 0;
}
//------------------------------------------------
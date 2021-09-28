/*==========================================*/
/* Program ilustruje pracê ze wskaŸnikiem   */
/*==========================================*/
#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;
//----------------------------------------
int main ()
{
  int zmienna = 8, druga = 4;
  int *wskaznik;
     
    wskaznik = &zmienna;	// ustawienie wska«nika na zmienna
    cout << "zmienna = " << zmienna
	 << "\n a odczytana przez wska«nik = "
	 << *wskaznik << endl;

    zmienna = 10;
    cout << "zmienna = " << zmienna
	 << "\n a odczytana przez wska«nik = "
	 << *wskaznik << endl;

    *wskaznik = 200;
    cout << "zmienna = " << zmienna
	 << "\n a odczytana przez wska«nik = "
	 << *wskaznik << endl;

    wskaznik = &druga;
    cout << "zmienna = " << zmienna
	 << "\n a odczytana przez wska«nik = "
	 << *wskaznik << endl;
    _getch();
    return 0;
}
//----------------------------------------

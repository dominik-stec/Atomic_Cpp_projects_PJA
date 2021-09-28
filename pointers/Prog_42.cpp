/*================================================*/
/*  Sta³y wskaznik                                */
/*================================================*/
#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;
//-----------------------------------------------
int main ()
{
  int a = 5,
      b = 100;
  int *wsk;						// zwykly wskaznik
  int * const st_wsk = &a;      // staly (nieruchomy) wskaznik

    wsk = &a;			// ustawienie wskaznika na a
    *wsk = 1;			// nadanie zmiennej a wartosci 1
    *st_wsk = 2;		// nadanie zmiennej a wartosci 2

    //-------- probujemy zmienic wskazniki

    wsk = &b;			// przestawienie wskaznika na b
    st_wsk = &b;		// ZLE: wskaznik st_wsk jest
						// ustawiony zawsze na zmienna a
    cout << "a = " << *st_wsk << " b = " << *wsk << endl;
    _getch();
    return 0;
}
//-----------------------------------------------
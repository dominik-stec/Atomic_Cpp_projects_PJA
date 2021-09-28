/*=================================================*/
/*  Wskaüniki do tablic                            */
/*=================================================*/
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

//-------------------------------------------------
int main ()
{
  int    *Wsk_i;
  float  *Wsk_f;
  int i, j;			       // wspolrzedne kursora
  int Tab_i[10] = { 0,1,2,3,4,5,6,7,8,9 };
  float Tab_f[10];
     
    Wsk_f = &Tab_f[0];
    for (i = 0; i < 10; i++)   // tworzenie tablicy Tab_f
    {
      *(Wsk_f++) = i/10.0;
    }
    cout << "Zawartosc tablic na poczatku:\n";
    for (i = 0, Wsk_i = Tab_i, Wsk_f = Tab_f; i< 10; i++)
    {
      cout << "Tab_i[" << i << "] = " << *Wsk_i;
	  for (j=1; j<=20; j++) cout << " ";
      cout << "Tab_f[" << i << "] = " << *Wsk_f << endl;
      Wsk_i++;
      Wsk_f++;
    }

    Wsk_i = &Tab_i[5];		// nowe ustawienie wskaznikow
    Wsk_f = Tab_f + 2;
    for (i = 0; i < 4; i++)	// wpisanie do tablic kilku
    { 						// wartosòci
      *(Wsk_i++) = 55;
      *(Wsk_f++) = 11;
    }

    cout << "\nTresc tablic po wstawieniu nowych wartosòci:\n";
    Wsk_i = Tab_i;
    Wsk_f = Tab_f;
    for (i = 0; i < 10; i++)
    {
      cout << "Tab_i[" << i << "] = " << setw(2) << *(Wsk_i++);
      for (j=1; j<=20; j++) cout << " ";
      cout << "Tab_f[" << i << "] = " << setw(3) << *(Wsk_f++) << endl;
    }
    _getch();
    return 0;
}
//--------------------------------------------------------
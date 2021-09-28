/*=====================================================*/
/*  Przekazywanie tablic do funkcji                    */
/*=====================================================*/
#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;
/********************************************************/
void Pokaz(const int *Wsk, int Ile);
void Zmien(int *Wsk, int Ile);
/********************************************************/
int main ()
{
  int Tab[5] = { 10, 20, 30, 40, 50 };
    Pokaz(Tab, 5);
    cout << "\nNacisnij dowolny klawisz\n";
    _getch();
    Zmien(Tab, 5);
    cout << "\nNacisnij dowolny klawisz\n";
    _getch();
    Pokaz(Tab, 5);
    cout << "\nNacisnij dowolny klawisz\n";
    _getch();
    cout << "Dla potwierdzenia Tab[4] = "
	 << Tab[4] << endl;
    _getch();
    return 0;
}
/********************************************************/
void Pokaz (const int *Wsk, int Ile)
{
  cout << "Dziala funkcja Pokaz:\n";
  for (int i = 0; i < Ile; i++, Wsk++)
  {
    //*Wsk += 20;	      // Tablicy nie wolno zmieniac!
    cout << "element nr " << i << " ma wartosc "
	 << *Wsk << endl;
  }
}
/********************************************************/
void Zmien (int *Wsk, int Ile)
{
  cout << "Dziala funkcja Zmien:\n";
  for  (int i = 0; i < Ile; i++, Wsk++)
  {
    *Wsk += 600;
    cout << "element nr " << i << " ma wartosc "
	 << *Wsk << endl;
  }
}
/*********************************************************/


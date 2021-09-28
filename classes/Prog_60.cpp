/*-------------------------------------------------------------------*/
/*  Przyk³ad definicji konstruktora oraz wykorzystanie konstruktora  */
/*  do inicjoiwania obiektów                                         */
/*-------------------------------------------------------------------*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
//--------------- definicja klasy Wartosc ------------------------
class Wartosc
{
  int Liczba;
  string Nazwa;
  public: //----- funkcje skˆadowe ------
    Wartosc (int L, string Opis);		// deklaracja konstruktora
    void Schowaj(int L)
    {
      Liczba = L;
      Melduj();
    }
    int Zwracaj()  { return Liczba; }
    void Melduj()
    {
      cout << Nazwa << Liczba << endl;
    }
};
//-------------- koniec definicji klasy Numer -----------------
Wartosc::Wartosc(int L, string Opis)
{
  Liczba = L;
  Nazwa = Opis;
}
//*************************************************************
int main ()
{
  Wartosc Samolot (1200, "Biezaca wysokosc "),
		  Atmosfera(920, "Cisnienie atmosferyczne: "),
		  Kurs(63, "Kierunek lotu: ");
  //---- wstepny raport -------------------

     Samolot.Melduj();
     Kurs.Melduj();
     Atmosfera.Melduj();

     cout << "\nKorekta lotu:\n";
     //---- wzrost wysoko˜ci o 1 m ------------
     Samolot.Schowaj(1201);
     //---- zmiana kursu o 3 stopnie ----------
     Kurs.Schowaj(Kurs.Zwracaj()+3);
     //---- zminiejszenie ci˜nienia o 2 hPa ---
     Atmosfera.Schowaj(Atmosfera.Zwracaj()-2);
     
     _getch();
     return 0;
}

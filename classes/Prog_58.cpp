/*-------------------------------------------------------------*/
/*  Program ilustruje definicjê prostej klasy oraz dzia³anie   */
/*  na sk³adnikach klasy                                       */
/*-------------------------------------------------------------*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
//------------------------ definicja klasy ------------------
class Osoba
{
      string Nazwisko_i_Imie;
      int Wiek;
  public:
      void Czyt_Dane(string Napis, int Wiek);
      //------------------------------------
      void Pisz_Dane ()
      {
	cout << "\t" << Nazwisko_i_Imie << ", lat - "
	     << Wiek << endl;
      }
};
//---------------------- koniec definicji klasy ------------
void Osoba::Czyt_Dane (string Napis, int L)
{
    Nazwisko_i_Imie = Napis;
    Wiek = L;
}
//---------------------------------------------------------
int main ()
{
  Osoba Student1, Student2, Asystent, Profesor;
     cout << "Dla informacji podaje, ze jeden obiekt klasy Osoba\n"
	  << " ma rozmiar: "
	  << sizeof(Osoba)
	  << " bajtow. \nTo samo inaczej: "
	  << sizeof(Student1) << " bajtow" << endl;
     Student1.Czyt_Dane("Kowalski Jan", 20);
     Student2.Czyt_Dane("Sikorski Piotr", 23);
     Asystent.Czyt_Dane("Michalski Tomasz", 28);
     Profesor.Czyt_Dane("Nowak Andrzej", 42);
     cout << "\nSprawdzamy wpisana informacje do obiektow.\n";

     cout << "\ndane z obiektu Profesor: \n";
     Profesor.Pisz_Dane();

     cout << "\ndane z obiektu Asystent: \n";
     Asystent.Pisz_Dane();

     cout << "\ndane z obiektu Student1: \n";
     Student1.Pisz_Dane();

     cout << "\ndane z obiektu Student2: \n";
     Student2.Pisz_Dane();
	 
     _getch();
     return 0;
}
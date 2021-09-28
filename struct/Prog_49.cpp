/*-------------------------------------------------------*/
/*  Program ilustruje dzia³anie na strukturze prostej    */
/*-------------------------------------------------------*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{

  struct Osoba
    {
      string Nazwisko, Imie;
      int Wiek;
    };

  Osoba Student;
  
  cout << "\nNazwisko: ";
  cin >> Student.Nazwisko;
  cout << "Imie: ";
  cin >> Student.Imie;
  cout << "Wiek: ";
  cin >> Student.Wiek;
  cout << "\n\nWprowadzono dane:\n\n";
  cout << Student.Imie + " " + Student.Nazwisko << "\tlat " << Student.Wiek << endl;
  _getch();
  return 0;
}

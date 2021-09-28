/*------------------------------------------------------------*/
/*  Program ilustruje dazia³anie na strukturze zagnie¿d¿onej  */
/*------------------------------------------------------------*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
  struct Data
  {
    int Dzien, Miesiac, Rok;
  };

  struct Osoba
  {
    string Nazwisko, Imie;
    Data Data_Ur;
  };

  Osoba Pracownik;
  Osoba Dane[3];

  cout << "Wprowadzam dane do zmiennej strukturalnej Pracownik:\n";

  cout << "\nNazwisko: ";
  cin >> Pracownik.Nazwisko;
  cout << "Imie: ";
  cin >> Pracownik.Imie;
  cout << "Data urodzenia: " << "\n\tDzien: ";
  cin >> Pracownik.Data_Ur.Dzien;
  cout << "\tMiesiac: ";
  cin >> Pracownik.Data_Ur.Miesiac;
  cout << "\tRok: ";
  cin >> Pracownik.Data_Ur.Rok;
  cout << "\n\nNacisnij dowolny klawisz";
  _getch();
  system("cls");

  cout << "Teraz wprowadzam dane do tablicy Dane skladajacej sie\n"
       << "z trzech elementow typu strukturalnego:\n";
  for (int i=0; i < 3; i++)
  {
     cout << "\nNazwisko: ";
     cin >> Dane[i].Nazwisko;
     cout << "Imie: ";
     cin >> Dane[i].Imie;
     cout << "Data urodzenia: " << "\n\tDzien: ";
     cin >> Dane[i].Data_Ur.Dzien;
     cout << "\tMiesiac: ";
     cin >> Dane[i].Data_Ur.Miesiac;
     cout << "\tRok: ";
     cin >> Dane[i].Data_Ur.Rok;
  }
  cout << "\n\nNacisnij dowolny klawisz";
  _getch();
  
  system("cls");
  cout << "\nDo zmiennej \"Pracownik\" wprowadzono nastepujace dane:\n\n";
  cout << Pracownik.Nazwisko + " " + Pracownik.Imie
          + " ur. " << Pracownik.Data_Ur.Dzien << "." << Pracownik.Data_Ur.Miesiac 
		  << "." << Pracownik.Data_Ur.Rok << "\n\n";

  cout << "\nDo tablicy \"Dane\" wprowadzono nastepujace dane:\n\n";
  for (int i=0; i < 3; i++)
  {
     cout << i+1 << ". " << Dane[i].Nazwisko + " " + Dane[i].Imie
          << " ur. " << Dane[i].Data_Ur.Dzien << "."
          << Dane[i].Data_Ur.Miesiac << "." << Dane[i].Data_Ur.Rok << endl;
  }
  _getch();
  return 0;
}

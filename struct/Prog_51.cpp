/*--------------------------------------------------------------------*/
/*  Program ilustruje dzia≥anie wskaünika do struktury zagnieødøonej  */
/*--------------------------------------------------------------------*/

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
  Osoba *Wsk;

  cout << "Wprowadzam dane do zmiennej strukturalnej Pracownik:\n";

  Wsk = &Pracownik;		// ustawiam wskaznik na zmiennej Pracownik
  cout << "\nNazwisko: ";
  cin >> Wsk->Nazwisko;
  cout << "Imie: ";
  cin >> Wsk->Imie;
  cout << "Data urodzenia: " << "\n\tDzien: ";
  cin >> Wsk->Data_Ur.Dzien;
  cout << "\tMiesiac: ";
  cin >> Wsk->Data_Ur.Miesiac;
  cout << "\tRok: ";
  cin >> Wsk->Data_Ur.Rok;
  cout << "\n\nNacisnij dowolny klawisz";
  _getch();
  system("cls");

  cout << "Teraz wprowadzam dane do tablicy Dane skladajacej sie\n"
       << "z trzech elementow typu strukturalnego:\n";
  int i;
  Wsk = Dane;			// ustawiam wskaznik na poczatku tablicy Dane
  for (i=0; i < 3; i++,Wsk++)
  {
     cout << "\nNazwisko: ";
     cin >> Wsk->Nazwisko;
     cout << "Imie: ";
     cin >> Wsk->Imie;
     cout << "Data urodzenia: " << "\n\tDzien: ";
     cin >> Wsk->Data_Ur.Dzien;
     cout << "\tMiesiac: ";
     cin >> Wsk->Data_Ur.Miesiac;
     cout << "\tRok: ";
     cin >> Wsk->Data_Ur.Rok;
  }
  cout << "\n\nNacisnij dowolny klawisz";
  _getch();
  system("cls");

  cout << "Teraz wyswietlam zawartosc zmiennej Pracownik:\n\n";
  Wsk = &Pracownik;
  cout << Wsk->Imie + " " + Wsk->Nazwisko + ", ur. "
       << Wsk->Data_Ur.Dzien << "." << Wsk->Data_Ur.Miesiac
       << "." << Wsk->Data_Ur.Rok << endl;

  cout << "\n\nTeraz wyswietlam zawartosc tablicy Dane:\n\n";
  Wsk = Dane;
  for (i=0; i < 3; i++,Wsk++)
  {
     cout << i+1 << ". " + Wsk->Imie + " " << Wsk->Nazwisko + ", ur. "
	  << Wsk->Data_Ur.Dzien << "." << Wsk->Data_Ur.Miesiac
	  << "." << Wsk->Data_Ur.Rok << endl;
  }
  _getch();
  return 0;
}
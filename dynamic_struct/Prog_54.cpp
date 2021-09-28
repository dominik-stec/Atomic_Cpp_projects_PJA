/******************************************************************/
/* Program tworzy liste jednokierunkowa bez sortowania elementow. */
/* Element roboczy listy przechowuje wartosc typu calkowitego     */
/* oraz wskaznik na nastepny element.                             */
/* Utowrzona lista jest ukierunkowana "do przodu".                */
/* Program umozliwia rowniez wyswietlenie kolejnych elementow     */
/* listy oraz odszukanie wskazanego elementu z listy.             */
/******************************************************************/
#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;
//----------------------------------------------------------------------
struct ELEMENT                         // struktura elementu roboczego
	{ int Wartosc;
	  struct ELEMENT *Nastepny;		   // wskaznik do nastepnego elementu
	};
struct INFO                            // struktura elementu informacyjnego
	{ ELEMENT *Glowa;
	  ELEMENT *Ogon;
	};

//----------------------------------------------------------------------
void Do_Listy(INFO *Wsk, int L);
void Tworz_Liste(INFO *Wsk, int n);
void Pisz_Liste(INFO *Wsk);
void Szukaj(INFO *Wsk, int L1);
void Usun_Liste(INFO *Wsk);
//----------------------------------------------------------------------
int main ()
{
 int n, L1;
 INFO *Wsk;							// wskaznik do elementu informacyjnego
   cout << "Podaj dgugosc listy: ";
   cin >> n;
   Wsk = new INFO;
   Tworz_Liste(Wsk, n);
   cout << "\nOto lista:\n " << endl;
   Pisz_Liste(Wsk);
   do
   {
     cout << "\nElement poszukiwany: ";
     cin >> L1;
     Szukaj(Wsk, L1);
     cout << "Szukamy dalej? (t/n):";
   }
   while (_getch()=='t');
   Usun_Liste(Wsk);
   _getch();
   return 0;
}

//----------------------------------------------------------------------
void Do_Listy(INFO *Wsk, int L)
/* Funkcja dolacza nowy element do listy - na koniec listy */
{
  ELEMENT *Nowy;
  Nowy = new ELEMENT;
  if (Wsk->Glowa == NULL)     	// dolaczenie nowego elementu
    {                                   // do listy pustej
      Wsk->Glowa = Nowy;
      Wsk->Ogon = Nowy;
    }
    else                                // dolaczenie nowego elementu
     { Wsk->Ogon->Nastepny = Nowy; // na koncu listy niepustej
       Wsk->Ogon = Nowy;
     }
   Nowy->Wartosc = L;
   Nowy->Nastepny = NULL;
}
//----------------------------------------------------------------------
void Tworz_Liste(INFO *Wsk, int n)
{
  int i, L;
  Wsk->Glowa = NULL;
  Wsk->Ogon = NULL;
  cout << "\nWprowadz kolejne elementy listy:\n\n";
  for (i=1; i <=n; i++)
    {
      cout << "el.";
      cout.width(2);
      cout << i << " = ";
      cin >> L;
      Do_Listy(Wsk,L);
    }
}
//----------------------------------------------------------------------
void Pisz_Liste(INFO *Wsk)
/*  Funkcja wyswietla elementy listy w kierunku od poczatku do konca */
{
  ELEMENT *Biezacy;
  int i = 0;
  Biezacy = Wsk->Glowa;
  if (Wsk->Glowa == NULL)
    cout << "Lista jest pusta\n";
    else while (Biezacy != NULL)
	    {
	      i++;
	      cout.width(2);
	      cout << Biezacy->Wartosc << endl;
	      Biezacy = Biezacy->Nastepny;
	     }
}
//----------------------------------------------------------------------
void Szukaj (INFO *Wsk, int L1 )
/* Funkcja wyszukuje wskazany element  listy */
{
  ELEMENT *Biezacy;	// adres elementu biezacego
  bool Znaleziono;
    Znaleziono = false;
    Biezacy = Wsk->Glowa;
    if (Wsk->Glowa == NULL)      // lista jest pusta
      cout << "Lista jest pusta\n";
      else
      { 
		  do 
		  {
			if (L1 == Biezacy->Wartosc)	// element znaleziono
			{ 
				Znaleziono = true;
				cout << "Element " << L1 << " odnaleziono!\n";
			}
	        else Biezacy = Biezacy->Nastepny;
	      }
		  while ((!Znaleziono) && (Biezacy != NULL));
		  if (!Znaleziono)
			cout << "Brak elementu " << L1 << " na liscie\n";
      }
}

//----------------------------------------------------------------------
void Usun_Liste(INFO *Wsk)
{
  int i=0;
  ELEMENT *Biezacy, *Usuniety;
  Biezacy = Wsk->Glowa;
  if (Wsk->Glowa == NULL)
    cout << "Lista jest pusta";
    else { while (Biezacy != NULL)
	    {
	      i++;
	      Usuniety = Biezacy;
	      Biezacy = Biezacy->Nastepny;
	      delete Usuniety;
	     }
	     if (Biezacy == NULL)
	       cout << "\n\nListe usunieto" << endl;
	  }
}
//----------------------------------------------------------------------


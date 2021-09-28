/******************************************************************/
/* Program tworzy liste jednokierunkowa bez sortowania elementow. */
/* Element roboczy listy przechowuje wartosc typu calkowitego     */
/* oraz wskaznik na nasteeny element.                             */
/* Utowrzona lista jest ukierunkowana "do przodu".                */
/* Program umozliwia rowniez wyswietlenie kolejnych wartosci      */
/* calkowitych znajdujacych sie w liscie.                        */
/******************************************************************/
#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;
//----------------------------------------------------------------------
struct ELEMENT                          // struktura elementu roboczego
       {
         int Wartosc;
         struct ELEMENT *Nastepny;      // wskaznik do nastepnego elementu
       };

struct INFO                         // struktura elementu informacyjnego
	{ ELEMENT *Glowa;
	  ELEMENT *Ogon;
	};

//------------------------------------------------------------------------
void Do_Listy( int W, INFO *Wsk);
void Tworz_Liste(int n, INFO *Wsk);
void Pisz_Liste(INFO *Wsk);
void Usun_Liste(INFO *Wsk);
//------------------------------------------------------------------------
int main ()
{
  int n;
  INFO *Wsk;                 // wskaznik do elementu informacyjnego
    cout << "Podaj dlugosc listy: ";
    cin >> n;
    Wsk = new INFO;
    Wsk->Glowa = NULL;
    Wsk->Ogon = NULL;
	Tworz_Liste(n, Wsk);
    Pisz_Liste(Wsk);
    Usun_Liste(Wsk);
   _getch();
   return 0;
}
//------------------------------------------------------------------------
void Do_Listy(int W, INFO *Wsk)
/* Procedura dolacza nowy element do listy - na koniec listy */
{
  ELEMENT *Nowy;
  Nowy = new ELEMENT;
  if (Wsk->Glowa == NULL)     	// dolaczenie nowego elementu
    {                                   // do listy pustej
      Wsk->Glowa = Nowy;
      Wsk->Ogon = Wsk->Glowa;
    }
    else                                // dolaczenie nowego elementu
     { Wsk->Ogon->Nastepny = Nowy; // na koncu listy niepustej
       Wsk->Ogon = Nowy;
     }
   Nowy->Wartosc = W;
   Nowy->Nastepny = NULL;
}
//------------------------------------------------------------------------
void Tworz_Liste(int n, INFO *Wsk)
{
  int i, W;
	cout << "\n\nWprowadz kolejne elementy listy:\n\n";
	for (i=1; i <=n; i++)
    {
      cout << "el.";
      cout << i << " = ";
      cin >> W;
      Do_Listy(W, Wsk);
    }
}
//------------------------------------------------------------------------
void Pisz_Liste(INFO *Wsk)
/*  Procedura wyswietla elementy listy w kierunku od poczatku do konca */
{
  ELEMENT *Biezacy;
  Biezacy = Wsk->Glowa;
  if (Wsk->Glowa == NULL)
    cout << "\n\nLista jest pusta\n";
    else 
	{
		cout << "\n\nOto lista:\n" << endl;
		while (Biezacy != NULL)
	    {
	      cout << Biezacy->Wartosc << endl;
	      Biezacy = Biezacy->Nastepny;
	     }
    }
}
//------------------------------------------------------------------------
void Usun_Liste(INFO *Wsk)
{
  ELEMENT *Biezacy, *Usuniety;
  Biezacy = Wsk->Glowa;
  if (Wsk->Glowa == NULL)
    cout << "\n\nLista jest pusta";
    else { while (Biezacy != NULL)
	    {
	      Usuniety = Biezacy;
	      Biezacy = Biezacy->Nastepny;
	      delete Usuniety;
	     }
	     if (Biezacy == NULL)
	       cout << "\nListe usunieto" << endl;
	  }
}
//------------------------------------------------------------------------

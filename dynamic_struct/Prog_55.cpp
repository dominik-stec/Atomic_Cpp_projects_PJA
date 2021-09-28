/******************************************************************/
/* Program tworzy liste jednokierunkowa bez sortowania elementow. */
/* Element roboczy listy przechowuje wartosc typu calkowitego     */
/* oraz wskaznik na nastepny element.                             */
/* Utowrzona lista jest ukierunkowana "do przodu".                */
/* Program umozliwia rowniez wyswietlenie kolejnych elementow     */
/* listy oraz usuniecie wskazanego elementu z listy.              */
/******************************************************************/
#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;
//----------------------------------------------------------------------
struct ELEMENT                       // struktura elementu roboczego
	{ int Wartosc;
	  struct ELEMENT *Nastepny;		 // wskaznik do nastepnego elementu
	} ;
struct INFO                          // struktura elementu informacyjnego
	{ ELEMENT *Glowa;
	  ELEMENT *Ogon;
	};

//----------------------------------------------------------------------
void Do_Listy(INFO *Wsk, int L);
void Tworz_Liste(INFO *Wsk, int n);
void Pisz_Liste(INFO *Wsk);
void Usun_Z_Listy(INFO *Wsk, int L1);
void Usun_Liste(INFO *Wsk);
//----------------------------------------------------------------------
int main ()
{
 int n, L1;
 INFO *Wsk;						// wskaznik do elementu informacyjnego
	cout << "Podaj dlugosc listy: ";
	cin >> n;
	Wsk = new INFO;
	Tworz_Liste(Wsk, n);

	Pisz_Liste(Wsk);
	cout << "\nElement poszukiwany: ";
	cin >> L1;
	Usun_Z_Listy(Wsk,L1);
	Pisz_Liste(Wsk);
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
      Wsk->Ogon = Wsk->Glowa;
    }
    else                                // dolaczenie nowego elementu
     { Wsk->Ogon->Nastepny = Nowy;      // na koncu listy niepustej
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
        cout << i << " = ";
        cin >> L;
        Do_Listy(Wsk, L);
      }
}
//----------------------------------------------------------------------
void Pisz_Liste(INFO *Wsk)
/*  Funkcja wyswietla elementy listy w kierunku od poczatku do konca */
{
  ELEMENT *Biezacy;
  Biezacy = Wsk->Glowa;
  if (Wsk->Glowa == NULL)
    cout << "Lista jest pusta\n";
    else 
	{
		cout << "\nOto lista:\n " << endl;
		while (Biezacy != NULL)
	    {
	      cout << Biezacy->Wartosc << endl;
	      Biezacy = Biezacy->Nastepny;
	     }
	}
}

//----------------------------------------------------------------------
void Usun_Z_Listy (INFO *Wsk, int L1 )
/* Funkcja usuwa zadany element z listy */
{
  ELEMENT *Biezacy,	// adres elementu biezacego
	  *Przed,    	// adres elementu poprzedzajacego usuwany
	  *Po;   	// adres elementu nastepnego po usuwanym
  bool Usuniety;
    Usuniety = false;       // lokalizacja elementu usuwanego
    Biezacy = Wsk->Glowa;
    if (Wsk->Glowa == NULL)      // lista jest pusta
      cout << "\nLista jest pusta\n";
      else
      { 
		  do 
		  {
				if (L1 == Biezacy->Wartosc)			// element znaleziono
				{ 
					Usuniety = true;
					if (Biezacy == Wsk->Glowa)		//element jest na poczatku
					{ 
						Wsk->Glowa = Wsk->Glowa->Nastepny;
						delete Biezacy;
					}
					else if (Biezacy == Wsk->Ogon)  //element jest na koncu
					{ 
					    Przed->Nastepny = NULL;
						delete Wsk->Ogon;
						Wsk->Ogon = Przed;
					}
					else							//element jest w srodku
					{  
						Po = Biezacy->Nastepny;
						delete Biezacy;
						Przed->Nastepny = Po;
					}								// element znaleziono
				}
				else 
				{ 									// elementu na razie nie znaleziono
                      if (Biezacy != NULL)
                      {
							Przed = Biezacy;
							Biezacy = Biezacy->Nastepny;
                      }
				}
	    }
	    while ((Biezacy != NULL)&& (!Usuniety) ); //koniec szukania
	    if (!Usuniety)
	      cout << "\nBrak elementu " << L1 << " na liscie\n";
	      else cout << "\nElement " << L1 << " zostal usuniety z listy\n";
     }
}


//----------------------------------------------------------------------
void Usun_Liste(INFO *Wsk)
{
  ELEMENT *Biezacy, *Usuniety;
  Biezacy = Wsk->Glowa;
  if (Wsk->Glowa == NULL)
    cout << "\nLista jest pusta";
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
//----------------------------------------------------------------------


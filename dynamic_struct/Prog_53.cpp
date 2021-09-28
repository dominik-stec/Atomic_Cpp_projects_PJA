/******************************************************************/
/* Program tworzy listê jednokierunkowa z sortowaniem elementow.  */
/* Lista sortowana jest niemalejaco.                              */
/* Program umozliwia rowniez wyswietlenie kolejnych elementow     */
/* calkowitych znajdujacych sie w liscie.                        */
/******************************************************************/
#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;
//-----------------------------------------------------------------------
struct ELEMENT                          // struktura elementu roboczego
       {
        int Wartosc;
        struct ELEMENT *Nastepny;      // wskaznik do nastepnego elementu
       };

struct INFO                         // struktura elementu informacyjnego
	{ ELEMENT *Glowa;
	  ELEMENT *Ogon;
	};

//-----------------------------------------------------------------------
void Do_Listy(INFO *Wsk, int L);
void Sort_Liste(int n, INFO *Wsk);
void Pisz_Liste(INFO *Wsk);
void Usun_Liste(INFO *Wsk);
//-----------------------------------------------------------------------
int main ()
{
 int n;
 INFO *Wsk;                 // wskaznik do elementu informacyjnego 
   cout << "Podaj dlugosc listy: ";
   cin >> n;
   Wsk = new INFO;
   Sort_Liste(n, Wsk);
   cout << "\nOto lista posortowana:\n " << endl;
   Pisz_Liste(Wsk);
   Usun_Liste(Wsk);
   _getch();
   return 0;
}
//-----------------------------------------------------------------------
void Do_Listy(INFO *Wsk, int L)
/* Procedura dolacza nowy element we wlasciwym miejscu  */
/* listy posortowanej.                                  */
{
  ELEMENT *Biezacy, *Nowy, *Przed, *Po;	// Przed - adres poprzednika
										// Po - adres nastepnika Biezacy
  Nowy = new ELEMENT;
  Biezacy = Wsk->Glowa;				// ustawienie sie na poczatku listy
  Nowy->Wartosc = L;
										// poszukiwanie miejsca wstawienia
  if (Wsk->Glowa == NULL)     			// lista jest pusta
  {
      Wsk->Glowa = Nowy;
      Wsk->Ogon = Nowy;
      Wsk->Ogon->Nastepny = NULL;
   }
   else                                // lista nie jest pusta
   { 
        while ((Biezacy != NULL) && (L > Biezacy->Wartosc))
        {
           Przed = Biezacy;
           Po = Biezacy->Nastepny;
           Biezacy = Po;
        }

										// wstawienie do listy
		if (Biezacy == Wsk->Glowa)		// element jest mniejszy od pierwszego
		{ 
			Nowy->Nastepny = Wsk->Glowa;
			Wsk->Glowa = Nowy;
		}
		else								// element jest wiekszy od ostatniego
		{ 
		   if (Biezacy == NULL)		
		   { 
			   Wsk->Ogon->Nastepny = Nowy;
		       Wsk->Ogon = Nowy;
		       Nowy->Nastepny = NULL;
		   }
		   else							// element jest w srodku
		   {	
			   Przed->Nastepny = Nowy;
			   Nowy->Nastepny = Po;
		   }
		}
   }
}
//-----------------------------------------------------------------------
void Sort_Liste(int n, INFO *Wsk )
/*  Funkcja tworzy liste sortowana na biezaco */
{
   int i, L;
    Wsk->Glowa = NULL;
    Wsk->Ogon = NULL;
    cout << "\n\nWprowadz kolejne elementy listy:\n\n";
    for (i=1; i <=n; i++)
    {
        cout << "el.";
        cout << i << " = ";
        cin >> L;
        Do_Listy(Wsk, L);
    }
}
//-----------------------------------------------------------------------
void Pisz_Liste(INFO *Wsk)
/*  Funkcja wyswietla elementy listy w kierunku od poczatku do konca */
{
  ELEMENT *Biezacy;
  Biezacy = Wsk->Glowa;
  if (Wsk->Glowa == NULL)
    cout << "Lista jest pusta\n";
    else while (Biezacy != NULL)
	    {
	      cout << Biezacy->Wartosc << endl;
	      Biezacy = Biezacy->Nastepny;
	     }
}
//-----------------------------------------------------------------------
void Usun_Liste(INFO *Wsk)
{
  ELEMENT *Biezacy, *Usuniety;
  Biezacy = Wsk->Glowa;
  if (Wsk->Glowa == NULL)
    cout << "Lista jest pusta";
    else 
	{ 
		while (Biezacy != NULL)
	    {
	      Usuniety = Biezacy;
	      Biezacy = Biezacy->Nastepny;
	      delete Usuniety;
	     }
	     if (Biezacy == NULL)
	       cout << "\nListe usunieto" << endl;
	 }
}
//-----------------------------------------------------------------------

/*=========================================================*/
/*  Program umozliwia:                                     */
/*    1. Wczytanie aktualnego rozmiaru ci¹gu liczb calk.   */
/*    2. Wczytanie element¢w wektora liczb calkowitych;    */
/*    3. Okreslenie elementu minimalnego oraz indeksu       */
/*       tego elementu;                                    */
/*    4. Wyswietlenie wartosci i indeks elementu min.      */
/*=========================================================*/
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

/*---------------------------------------------------------*/
void Czyt_Dane(int *, int *);
void Min_Element(const int *, int *, int *, int *);
void Pisz_Wynik(const int *, const int *);
/*---------------------------------------------------------*/

int main ()			
{
  const int n_Max = 10;				// max rozmiar tablicy
  int X[n_Max];						// definicja tablicy

  int n,	    					// aktualny rozmiar tablicy
      El_Min,						// element maksymalny
      Ind_Min;						// indeks elementu maks.
  Czyt_Dane (&n, X);
  Min_Element (&n, X, &El_Min, &Ind_Min);
  Pisz_Wynik (&El_Min, &Ind_Min);
  _getch();

}                              
/*--------------------------------------------------------*/

void Czyt_Dane(int *wsk_n, int *wsk_tab)
/*=========================================================*/
/*   Wczytanie rozmiaru i kolejnych element¢w tablicy.     */
/*   UWAGA:                                                */
/*      wsk_n - wskaznik do aktualnego rozmiaru tablicy;   */
/*      wsk_tab - wskaznik do tablicy elementow.           */
/*=========================================================*/
{ int i;
    cout << "Podaj rozmiar tablicy: ";
    cin >> *wsk_n;
    cout << "\nPodaj kolejne elementy tablicy:\n";
    cout << endl;
    for (i = 0; i < *wsk_n; i++, wsk_tab++)
    {
		cout << "X[" <<	setw(2) << i << "] = ";
		cin >> *wsk_tab;
    }
}
/*---------------------------------------------------------*/

void Min_Element(const int *wsk_n, int *wsk_tab,
		       int *wsk_El_Min, int *wsk_Ind_Min)
/*=========================================================*/
/*  Okreslenie elementu maksymalnego i jego indeksu        */
/*  UWAGA:                                                 */
/*      wsk_n - wskaznik do aktualnego rozmiaru tablicy;   */
/*      wsk_tab - wskaznik do tablicy elementow;           */
/*      wsk_El_Min - wskaznik do elementu maksymalnego;    */
/*      wsk_Ind_Min - wskaznik do indeksu elementu maks.   */
/*=========================================================*/
{
  //int i;
    *wsk_El_Min = *wsk_tab;
    *wsk_Ind_Min = 0;
    for (int i = 0; i < *wsk_n; i++, wsk_tab++ )
		if (*wsk_El_Min > *wsk_tab)
		{
		   *wsk_El_Min = *wsk_tab;
		   *wsk_Ind_Min = i;
		}
}
/*--------------------------------------------------------*/

void Pisz_Wynik (const int *wsk_El_Min, const int *wsk_Ind_Min)
/*==========================================================*/
/*  Wyswietlenie wartosci i kolejnego numeru elementu maks. */
/*  UWAGA:                                                  */
/*      wsk_El_Min - wskaznik do elementu maksymalnego;     */
/*      wsk_Ind_Min - wskaznik do indeksu elementu maks.    */
/*==========================================================*/
{
  cout << "\nElement o wartosci minimalnej: " << *wsk_El_Min;
  cout << "\nIndeks elementu minimalnego: " << *wsk_Ind_Min;
  cout << endl;
}
/*--------------------------------------------------------*/

/*-------------------------------------------------------------*/
/*  Program rezerwuje pamiêæ na tablicê o wymiarach 10x10,     */
/*  wczytuje aktualne rozmiary tablicy, wype³nia tabelê        */
/*  losowymi liczbami ca³kowitymi z zakresu <1, 10>,           */
/*  a nastêpnie zamienia w ka¿dym wierszu elementy le¿¹ce      */
/*  symetrycznie wzglêdem prostej pionowej dziel¹cej tablicê   */
/*  na polowê.                                                 */
/*-------------------------------------------------------------*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <time.h>
#include <math.h>
#include <Windows.h>
#include <iomanip>
#include "konsola.cpp"

using namespace std;
//----------------------------------------------------------------------
void czyt_dane(int *wsk_n, int *wsk_m, int wsk_tab[][10]);
void pisz_tab(char *napis, int *wsk_n, int *wsk_m, int wsk_tab[][10]);
void zamien(int *wsk_n, int *wsk_m, int wsk_tab[][10]);
int main()
{
  int n, m;
  int tab[10][10];
  czyt_dane(&n, &m, tab);
  pisz_tab("\n\Tablica poczatkowa:\n\n", &n, &m, tab);
  zamien(&n, &m, tab);
  pisz_tab("\n\Tablica koncowa:\n\n", &n, &m, tab);
  getch();
  return 0;
}

//----------------------------------------------------------------------
void czyt_dane(int *wsk_n, int *wsk_m, int wsk_tab[][10])
{
   int i,j;
   cout << "Podaj liczbe wierszy: ";
   cin >> *wsk_n;
   cout << "Podaj liczbe kolumn: ";
   cin >> *wsk_m;
   srand((unsigned int)time(NULL));
   for (i = 0; i < *wsk_n; i++)
     for (j =0; j < *wsk_m; j++)
         *(*(wsk_tab+i) + j) = rand()%10 +1;
}
//----------------------------------------------------------------------
void pisz_tab(char *napis, int *wsk_n, int *wsk_m, int wsk_tab[][10])
{
   int i,j;
   int x=1, y;
   cout << napis;
   y = wherey();
   for (i = 0; i < *wsk_n; i++)
     {
     for (j =0; j < *wsk_m; j++)
       {
         gotoxy(x + 4*j, y);
         cout << setw(2) << *(*(wsk_tab+i) + j);
       }
       y++;
      }
    cout << endl;
}
//----------------------------------------------------------------------
void zamien(int *wsk_n, int *wsk_m, int wsk_tab[][10])
{
  int i, j;
  for (i=0; i<*wsk_n; i++)
     for (j=0; j<*wsk_m/2; j++)
		{
			swap(*(*(wsk_tab + i) + j), *(*(wsk_tab + i) + *wsk_m - 1 - j));
		}
}
//----------------------------------------------------------------------


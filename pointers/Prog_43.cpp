/*====================================================*/
/*  Wskaznik do stalej                                */
/*====================================================*/
#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;
//----------------------------------------------------
int main ()
{
  int x[4] = { 100, 1, 2, 3 };
  int tmp;
  int *wsk;					// zwykly wskaznik
  const int *wsk_do_st; 	// wskaznik do obiektu stalego;
							// nie musi on byc od razu ustawiany
    wsk = x;				// ustawienie obu wskaznikow
    wsk_do_st = x;          // na poczatku tablicy

    tmp = *wsk;				// odczytanie zerowego elementu tablicy
    tmp = *wsk_do_st;		// jak wyzej

    //---- przesuniecie obu wskaznikow na nastepny element tablicy

    wsk++;
    wsk_do_st++;

    //---- wpisanie nowych wartosci nowe adresy

    *wsk = 0;			// wpisanie 0 do x[1]
    *wsk_do_st = 0;		// ZLE: proba zmiany obiekyu stalego
    cout << "tmp = " << tmp << endl;
	//cout << "*wsk_do_st = " << *wsk_do_st << endl;
    _getch();
    return 0;
}
//----------------------------------------------------
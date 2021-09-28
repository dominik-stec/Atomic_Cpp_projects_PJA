/*===========================================================*/
/*   Operator new                                            */
/*===========================================================*/
#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;
char *producent (void);
/*************************************************************/
int main ()
{
  char *w1, *w2, *w3, *w4;		// definicje wskaznikow

    w1 = producent ();			// tworzenie wskaznikow
    w2 = producent ();
    w3 = producent ();
    w4 = producent ();
    *w1 = 'C';
    *w2 = '+';
    *w3 = '+';

    cout << "\nOto 3 znaki: " << *w1 << *w2 << *w3
		 << "\noraz znak przypadkowy w czwartym: " << *w4
	 << endl << endl;
    _getch();
    return 0;
}
/************************************************************/
char *producent (void)
{
  char *w;
    cout << "Tworze nowy obiekt\n";
    w = new char;
    return w;
}
/************************************************************/

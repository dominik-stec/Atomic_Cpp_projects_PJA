/*----------------------------------------------------------------*/
/*  Program umozliwia wczytanie napisów do tablicy typu string    */
/*  oraz wyswietlenie elementów tej tablicy                       */
/*----------------------------------------------------------------*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	const int n_max = 10;
	int i=0, n;
	string tab[n_max];
	cout << "Podaj aktualny rozmiar tabeli: "; 
	cin >> n;
	cin.ignore(1);
	cout << "\nPodaj kolejne elementy tablicy:\n\n";
	for (i=0; i<n; i++)
	{
		getline(cin, tab[i], '\n');
	}
	cout << "\n\nWczytano napisy:\n\n";
	for (i=0; i<n; i++)
		cout << "tab[" << i << "] = " << tab[i] << endl;	
	_getch();
	return 0;
}

/*

Podaj aktualny rozmiar tabeli: 3

Podaj kolejne elementy tablicy: 

Ala
ma
kota

Wczytano napisy:

tab[0] = Ala
tab[1] = ma
tab[2] = kota

*/

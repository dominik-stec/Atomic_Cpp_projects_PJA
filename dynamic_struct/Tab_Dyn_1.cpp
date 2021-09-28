/*-----------------------------------------------------------*/
/* Program tworzy jednowymiarow¹ tablicê dynamiczn¹          */
/* o n elementach typu int oraz oblicza sumê elementów       */
/* tablicy.                                                  */
/*-----------------------------------------------------------*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

//----------------------------------------------------------
void Suma_El_Tab(int n, int *Wsk);

//----------------------------------------------------------
int main()
{
    int n, Suma;
	int *W;
	cout << "Podaj rozmiar tablicy: ";
	cin >> n;
	W = new int[n];
	Suma_El_Tab(n,W);
	_getch();
    return 0;
}
//----------------------------------------------------------

void Suma_El_Tab(int n, int *Wsk)
{
	int Suma=0;
	cout << "\nPodaj kolejne elementy tablicy dynamicznej:\n\n";
	for (int i=0; i<n; i++)
	{
		cout << "Wsk[" << setw(2) << i << "] = ";
		cin >> *(Wsk + i);
		Suma += *(Wsk + i);
	}
	cout << "\n\nSuma = " << Suma << endl;
	delete []Wsk;
}
//----------------------------------------------------------
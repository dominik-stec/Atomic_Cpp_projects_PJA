/*-----------------------------------------------------------*/
/* Program tworzy dwuwymiarow¹ tablicê dynamiczn¹ typu int   */
/* o n wierszach i m kolumnach oraz oblicza sumê elementów   */
/* tablicy.                                                  */
/*-----------------------------------------------------------*/
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
//-----------------------------------------------------------
void Dane(int n, int m, int *Wsk);
int Suma(int n, int m, int *Wsk);
//-----------------------------------------------------------
int main()
{
    int n, m, S=0;
	int *Wsk;
	cout << "Podaj liczbe wierszy tablicy: ";
	cin >> n;
	cout << "Podaj liczbe kolumn tablicy: ";
	cin >> m;
	Wsk = new int[n*m];
	Dane(n,m,Wsk);
	S = Suma(n,m,Wsk);
	cout << "\n\nSuma = " << S << endl;
	_getch();
	delete []Wsk;
    return 0;
}
//--------------------------------------------------------------
void Dane(int n, int m, int *Wsk)
{
	cout << "\nPodaj kolejne elementy tablicy dynamicznej:\n\n";
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cout << "Wsk[" << i << "," << j << "] = ";
			cin >> *(Wsk + i*m + j);
		}

	}
}
//--------------------------------------------------------------
int Suma(int n, int m, int *Wsk)
{
	int s = 0;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			s += *(Wsk + i*m + j);
		}
	}
	return s;
}
//--------------------------------------------------------------
/*------------------------------------------------------------*/
/*  Program ilustruje definiowanie klas zagniezd¿onych.       */
/*  Definiowanie konstruktorów w klasach zagnie¿d¿onych.      */
/*------------------------------------------------------------*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;
//-------------------------------------------------------------
class Bazowa
{
	public:
		Bazowa() 
		{cout << "Konstruktor klasy bazowej\n"; };
		~Bazowa() 
		{cout << "Destruktor klasy bazowej\n"; };
};
//-------------------------------------------------------------
class Pochodna_1:   public Bazowa
{
	int z;
	public:
		Pochodna_1( )
		{cout << "Konstruktor klasy Pochodna_1\n"; }
		~Pochodna_1( ) 
		{cout << "Destruktor klasy Pochodna_1\n"; };
};
//-------------------------------------------------------------
class Pochodna_2:   public Pochodna_1
{
	public:
		Pochodna_2( )
		{cout << "Konstruktor klasy Pochodna_2\n"; }
		~Pochodna_2( ) 
		{cout << "Destruktor klasy Pochodna_2\n"; };
};
//-------------------------------------------------------------
int main()
{
	Pochodna_2 Obiekt;
	{Pochodna_2 Obiekt;}
	_getch();
	return 0;
}
//-------------------------------------------------------------
/*--------------------------------------------------------------*/
/*  Konstruktory i destruktory w klasach zagnie¿d¿onych         */
/*--------------------------------------------------------------*/

#include <iostream>
#include <conio.h>

using namespace std;
class Bazowa
{
	public:
		Bazowa( )
		{cout << "Konstruktor klasy bazowej\n";};
		~Bazowa() 
		{cout << "Destruktor klasy bazowej\n";};
};
class Pochodna:  public Bazowa
{
	public:
		Pochodna( ) 
		{cout << "Konstruktor klasy pochodnej\n";}
		~Pochodna( ) 
		{cout << "Destruktor klasy pochodnej\n";};
};


int main()
{
	{Pochodna D;}
	_getch();
	return 0;
}


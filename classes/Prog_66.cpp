/*------------------------------------------------------------*/
/*  Program ilustruje definiowanie klas zagniezd¿onych.       */
/*  Definiowanie konstruktorów w klasach zagnie¿d¿onych.      */
/*------------------------------------------------------------*/


#include <iostream>
#include <conio.h>

using namespace std;
//-------------------------------------------------------------
class Bazowa
{
	protected:
		int x, y;
	public:
		Bazowa(int _x, int _y ) : x(_x), y(_y)
		{ };
		~Bazowa() 
		{ };
		void Podaj()
		{ cout << "x = " << x << "\ny = " << y << endl;}
};
//-------------------------------------------------------------
class Pochodna:  public Bazowa
{
	int z;
	public:
		Pochodna(int _x, int _y, int _z ): Bazowa(_x,_y), z(_z)
		{ }
		~Pochodna( ) 
		{ };
		void Podaj()
		{
			Bazowa::Podaj();
			cout << "z = " << z << endl;
		}
};
//-------------------------------------------------------------
int main()
{
	Bazowa B(20,25);
	Pochodna D2(5,10,15);
	D2.Podaj();
	B.Podaj();
	_getch();
	return 0;
}
//-------------------------------------------------------------
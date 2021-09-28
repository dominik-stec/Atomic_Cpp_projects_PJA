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
		void Podaj_xy()
		{ cout << "x = " << x << "\ny = " << y;}
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
			Podaj_xy();
			cout << "\nz = " << z << endl;
		}
};
//-------------------------------------------------------------
int main()
{
	Pochodna D2(5,10,15);
	D2.Podaj();
	_getch();
	return 0;
}
//-------------------------------------------------------------
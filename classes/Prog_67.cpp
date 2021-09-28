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
		Bazowa(int _x, int _y) : x(_x), y(_y)
		{ };
		~Bazowa() 
		{ };
		void Podaj()
		{ cout << "x = " << x << "\ny = " << y;}
};
//-------------------------------------------------------------
class Pochodna:  public Bazowa
{
	int t, z;
	public:
		Pochodna(int _x, int _y, int _t, int _z ): t(_t), z(_z), Bazowa(_x,_y)
		{ }
		~Pochodna( ) 
		{ };
		void Podaj()
		{
			Bazowa::Podaj();
			cout << "\nt = " << t ;
			cout << "\nz = " << z << endl << endl;
		}
};
//-------------------------------------------------------------
int main()
{
	Bazowa B(30, 40);
	Pochodna D2(5,10,15, 20);
	D2.Podaj();
	B.Podaj();
	_getch();
	return 0;
}
//-------------------------------------------------------------
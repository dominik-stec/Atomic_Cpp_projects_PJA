#include <iostream>
#include <conio.h>

using namespace std;
int a;
void P(int, int, int &);

int main()
{
	int b = 3, c = 2;
	cout << "a = " << a << "\tb = " << b << "\tc = " << c << endl;
	P(a, c, b);
	cout << "a = " << a << "\tb = " << b << "\tc = " << c << endl;
		
	system("pause");
	return 0;
}
void P(int d, int e, int &c)
{
	int a;
	a = c - 1;
	e = d - c + 1;
	c = c % 2;
	cout << "a = " << a << "\te = " << e << "\tc = " << c << endl;
}
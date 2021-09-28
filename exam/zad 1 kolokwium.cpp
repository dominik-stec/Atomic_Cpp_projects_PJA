#include <iostream>
#include <conio.h>

using namespace std;

int F(int, int, int);
int main()
{
	int y = 1, a = 17, b = 7, i;
	for (i = a / 2; i >= b - 2; i--)
	{
		switch (i % 3)
		{
		case 0: {y = y + 1; break; }
		case 1: {y = y - 1; break; }
		case 2: {y = F(i, b, y); break; }
		}
		cout << "y = " << y << endl;
	}
	
	system("pause");
	return 0;
}
int F(int a, int b, int c)
{
	if (a > b / 2) return (c + 2);
	else return (c - 2);
}
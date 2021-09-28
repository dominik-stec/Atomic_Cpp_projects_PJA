#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i = 5, s = 0;
	int x[5] = { 0, 0, 0, 0, 0 };
	int y[5] = { 0, 0, 0, 0, 0 };
	int *ws, *wx, *wy;
	ws = &s, wx = x, wy = y;
	do
	{
		*wx = 5 - i;
		if (*wx % 3) *wy = -*wx / 3;
		else *wy = 0;
		*ws = s - *wx*(*wy);
		wx++; wy++; i--;
	} while (i);
	cout << "s = " << s << endl;
	
	system("pause");
	return 0;
}
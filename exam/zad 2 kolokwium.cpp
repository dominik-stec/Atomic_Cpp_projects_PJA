#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i, s = 0;
	int x[5] = { 0, 0, 0, 0, 0 }, y[5] = { 0, 0, 0, 0, 0 };
	for (i = 0; i < 5; i++) x[i] = i;
	y[0] = 0;
	i = 4;
	while (i) { y[i] = x[i] / 2; i--; }
	for (i - 0; i < 5; i++)
	{
		s = s + x[i] * y[i];
	}
	cout << "s = " << s << endl;
	system("pause");
	return 0;
}
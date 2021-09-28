/*-----------------------------------------------------------------*/
/*  Program ilustruje mechanizm dziedziczenia obiektów.            */
/*  Program oblicza pole i obwód figur geometrycznych              */
/*  (kwadratu i prostok¹ta) oraz rysuje te figury.                 */
/*  Klas¹ bazow¹ jest Kwadrat, natomiast klas¹ pochodn¹ jest       */
/*  Prostokat.                                                     */
/*-----------------------------------------------------------------*/

#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
//----------------------------------------------------------------
class Kwadrat
{
protected:
	int x, y, bok;
	void gotoxy(int wx, int wy);

public:
	Kwadrat(int _x, int _y, int _bok) : x(_x), y(_y), bok(_bok)
	{}
	~Kwadrat() { cout << "\n\nLikwiduje obiekt klasy Kwadrat\n"; };
	float Pole() { return bok*bok; }
	float Obwod() { return 4 * bok; }
	void Rysuj();
};
//----------------------------------------------------------------
void Kwadrat::gotoxy(int wx, int wy)
{
	COORD cord;
	cord.X = wx;
	cord.Y = wy;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}
void Kwadrat::Rysuj()
{
	int x1, y1;
	x1 = x;
	y1 = y;
	gotoxy(x1, y1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << char(218);
	for (int i = 1; i <= bok - 2; i++) cout << char(196);
	cout << char(191) << endl;
	y1++;
	for (int i = 1; i <= bok - 2; i++)
	{
		gotoxy(x1, y1);
		cout << char(179);
		for (int j = 1; j <= bok - 2; j++) cout << ' ';
		cout << char(179);
		y1++;
	}
	gotoxy(x1, y1);
	cout << char(192);
	for (int i = 1; i <= bok - 2; i++) cout << char(196);
	cout << char(217) << endl;

}
//----------------------------------------------------------------
class Prostokat : public Kwadrat
{
private:
	int bok2;
public:
	Prostokat(int _x, int _y, int _bok1, int _bok2 = 10) : Kwadrat(_x, _y, _bok1), bok2(_bok2)
	{};
	~Prostokat() { cout << "\n\nLikwiduje obiekt klasy Prostokat\n"; };
	float Pole() { return bok*bok2; }
	float Obwod() { return 2 * (bok + bok2); }
	void Rysuj();
};
//----------------------------------------------------------------
void Prostokat::Rysuj()
{
	int x1, y1;
	x1 = x;
	y1 = y;
	gotoxy(x1, y1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << char(218);
	for (int i = 1; i <= bok2 - 2; i++) cout << char(196);
	cout << char(191) << endl;
	y1++;
	for (int i = 1; i <= bok - 2; i++)
	{
		gotoxy(x1, y1);
		cout << char(179);
		for (int j = 1; j <= bok2 - 2; j++) cout << ' ';
		cout << char(179);
		y1++;
	}
	gotoxy(x1, y1);
	cout << char(192);
	for (int i = 1; i <= bok2 - 2; i++) cout << char(196);
	cout << char(217) << endl;
}
//----------------------------------------------------------------
int main()
{
	Kwadrat K(3, 5, 6);
	Prostokat P(30, 8, 6, 6);
	cout << "Pole kwadratu wynosi: " << K.Pole() << endl;
	cout << "\nObwod kwadratu wynosi: " << K.Obwod() << endl;
	cout << "\nPole prostokata wynosi: " << P.Pole() << endl;
	cout << "\nObwod prostokata wynosi: " << P.Obwod() << endl;
	cout << "\n\nRysujemy figury?\n";
	_getch();
	system("cls");
	K.Rysuj();
	P.Rysuj();
	_getch();
	return 0;
}
//----------------------------------------------------------------

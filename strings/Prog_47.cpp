/*----------------------------------------------------------*/
/*  Program ilustruje dzia³ania na zmiennych typu string    */
/*----------------------------------------------------------*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	string Str1="Ala ma kota";
	string Str2, Str3, Str4, Str5;
	cout << "Oto napis 1: " << Str1 << endl;
	Str2 = string(Str1, 2, 1);
	Str3 = string(Str1, 4, 2);
	Str4 = string(Str1, 4);
	Str5 = Str1 + " " + "i psa";
	cout << "Oto napis 2: " << Str2 << endl;
	cout << "Oto napis 3: " << Str3 << endl;
	cout << "Oto napis 4: " << Str4 << endl;
	cout << "Oto napis 5: " << Str5 << endl;
	_getch();
	return 0;
}

//Oto napis 1: Ala ma kota
//Oto napis 2: a
//Oto napis 3: ma
//Oto napis 4: ma kota
//Oto napis 5: Ala ma kota i psa


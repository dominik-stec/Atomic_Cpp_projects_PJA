/*----------------------------------------------------------------*/
/*  Program ilustruje dzia³anie funkcji na zmiennych typu string  */
/*----------------------------------------------------------------*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	/*
	int z_int = 123, z1_int; 
	long int z_lint = 987, z1_lint;
	long long z_llong = 456, z1_llong;
	double z_double = 123.456, z1_double;
	long double z_ldouble = 345.6789, z1_ldouble; */
	string str1 = "321" , 
		   str2 = "-234", 
		   str3 = "345",
		   str4 = "456",
		   str5 = "-456",
		   str6 = "567", 
		   str7 = "-678",
		   str8 = "654.321", 
		   str9 = "9876.549",
		   str10 = "1.239e-4";
	string Buf;
	int z_int;
	long int z_lint;
	long long z_llong;
	unsigned int z_uint1, z_uint2;
	unsigned long int z_ulint;
	unsigned long long z_ullong;
	float z_float;
	double z_double;
	long double z_ldouble;

	cout << "Konwersja napisow na zmienne liczbowe:\n\n";
	z_int = stoi(str1);
	cout << "\"" << str1 << "\" = " << z_int << ", sizeof(z_int) = " << sizeof(z_int)<< endl;
	z_lint = stoi(str2);
	cout << "\"" << str2 << "\" = " << z_lint << ", sizeof(z_lint) = " << sizeof(z_lint)<< endl;
	z_llong = stoll(str3);
	cout << "\"" << str3 << "\" = " << z_llong << ", sizeof(z_llong) = " << sizeof(z_llong)<< endl;
	z_uint1 = stod(str4);
	cout << "\"" << str4 << "\" = " << z_uint1 << ", sizeof(z_uint1) = " << sizeof(z_uint1)<< endl;
	z_uint2 = stod(str5);
	cout << "\"" << str5 << "\" = " << z_uint2 << ", sizeof(z_uint2) = " << sizeof(z_uint2)<< endl;
	z_ulint = stod(str6);
	cout << "\"" << str6 << "\" = " << z_ulint << ", sizeof(z_ulint) = " << sizeof(z_ulint)<< endl;
	z_ullong = stod(str7);
	cout << "\"" << str7 << "\" = " << z_ullong << ", sizeof(z_ullong) = " << sizeof(z_ullong)<< endl;
	z_float = stof(str8);
	cout << "\"" << str8 << "\" = " << z_float << ", sizeof(z_float) = " << sizeof(z_float)<< endl;
	z_double = stod(str9);
	cout << "\"" << str9 << "\" = " << z_double << ", sizeof(z_double) = " << sizeof(z_double)<< endl;
	z_ldouble = stold(str10);
	cout << "\"" << str10 << "\" = " << z_ldouble << ", sizeof(z_ldouble) = " << sizeof(z_ldouble)<< endl;

	cout << "\n\nKonwersja liczb na zmienne typu string:\n\n";
	Buf = to_string(z_llong);
	cout << z_llong << " po konwersji na typ string: " << Buf << endl;
	z_llong = -789;
	Buf = to_string(z_llong);
	cout << z_llong << " po konwersji na typ string: " << Buf << endl;
	Buf = to_string(z_ullong);
	cout <<  z_ullong << " po konwersji na typ string: " << Buf << endl;
	z_ullong = -456;
	Buf = to_string(z_ullong);
	cout <<  z_ullong << " po konwersji na typ string: " << Buf << endl;
	Buf = to_string(z_ldouble);
	cout << z_ldouble << " po konwersji na typ string: " << Buf << endl;
	z_ldouble =5.789e-3;
	Buf = to_string(z_ldouble);
	cout << z_ldouble << " po konwersji na typ string: " << Buf << endl;
	z_ldouble =5.789e-10;
	Buf = to_string(z_ldouble);
	cout << z_ldouble << " po konwersji na typ string: " << Buf << endl;
	z_ldouble =6.789e-4;
	Buf = to_string(z_ldouble);
	cout << z_ldouble << " po konwersji na typ string: " << Buf << endl;

	_getch(); 
	return 0; 
} 


/*

Konwersja napisow na zmienne liczbowe:

"321" = 321, sizeof(z_int) = 4
"-234" = -234, sizeof(z_lint) = 4
"345" = 345, sizeof(z_llong) = 8
"456" = 456, sizeof(z_uint1) = 4
"-456" = 4294966840, sizeof(z_uint2) = 4
"567" = 567, sizeof(z_ulint) = 4
"-678" = 18446744073709550938, sizeof(z_ullong) = 8
"654.321" = 654.321, sizeof(z_float) = 4
"9876.549" = 9876.55, sizeof(z_double) = 8
"1.239e-4" = 0.0001239, sizeof(z_ldouble) = 8


Konwersja liczb na zmienne typu string:

345 po konwersji na typ string: 345
-789 po konwersji na typ string: -789
18446744073709550938 po konwersji na typ string: 18446744073709550938
18446744073709551160 po konwersji na typ string: 18446744073709551160
0.0001239 po konwersji na typ string: 0.0001239
0.005789 po konwersji na typ string: 0.005789
5.789e-010 po konwersji na typ string: 5.789e-010
0.0006789 po konwersji na typ string: 0.0006789

*/

// int 		-2 147 483 648 ... 2 147 483 647 
// unsigned int 	             0 ... 4 294 967 295


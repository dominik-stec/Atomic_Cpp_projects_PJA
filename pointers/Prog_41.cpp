/*================================================*/
/*  Operator new                                  */
/*================================================*/
#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;
//------------------------------------------------
int main ()
{
  int *w1, *w2;
    
    w1 = new int;
    w2 = new int;

    *w1 = 100;
    *w2 = 200;

    cout << "Pod adresem w1 mamy wartosc: " << *w1
	 << "\nPod adresem w2 mamy wartosc: " << *w2 << endl;

    w1 = w2;

    cout << "\nTeraz pod adresem w1 mamy wartosc: " << *w1 << endl
	 << "Teraz pod adresem w2 mamy wartosc: " << *w2 << endl;

    *w1 = 5;
    *w2 = 3;

    cout << "\nTeraz pod adresem w1 mamy wartosc: " << *w1 << endl
	 << "Teraz pod adresem w2 mamy wartosc: " << *w2 << endl;

    delete w2;
    _getch();
    return 0;
}
//-------------------------------------------------
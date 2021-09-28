/*=============================================*/
/*  Tablica wskaznikow                         */
/*=============================================*/
#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;
//---------------------------------------------
int main ()
{
  char *przystanek [] = { "Gdansk", "Wrzeszcz", "Oliwa",
			  "Sopot", "Orlowo", "Gdynia" };
  char *wsk[3];
  int i;

    for (i = 0; i < 6; i++)
      cout << "Przystanek: " << przystanek [i] << endl;

    wsk[0] = przystanek[2];
    wsk[1] = przystanek[5];
    wsk[2] = "T E K S T";

    cout << "Oto 3 elementy tablicy wsk:\n"
	 << wsk[0] << ", "
	 << wsk[1] << ", "
	 << wsk[2] << endl;
    _getch();
    return 0;
}
//---------------------------------------------
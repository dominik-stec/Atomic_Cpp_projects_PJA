/*===================================================*/
/*  Porownywanie wskaznikow                          */
/*===================================================*/
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;
//--------------------------------------------------
int main ()
{
  int Tab[10];
  int *Wsk_a, *Wsk_b;
  int i;
//  char z;

  do
  {
    system("cls");
	Wsk_a = &Tab[5];
    cout << "Mamy 10-elementowa tablice Tab.\n"
	     << "Wskaznik Wsk_a pokazuje na element o indeksie 5.\n"
	     << "Na ktory element ma pokazywac wskaznik Wsk_b? (0-9): ";
    cin >> i;
    if (i < 0 || i >= 10)
      cout << "\nNie ma takiego elementu w tej tablicy!";
      else
	{
	  Wsk_b = &Tab[i];
	  cout << "\nZ przeprowadzonego porownania wskaznik¢w"
		  " Wsk_a i Wsk_b wynika, ¾e: \n";
	  if (Wsk_a > Wsk_b)
	    cout << "Wsk_b pokazuje na element blizej poczatku tablicy\n";
	    else if (Wsk_a < Wsk_b)
		   cout << "Wsk_b pokazuje na element o wyzszym indeksie\n";
		   else if (Wsk_a == Wsk_b)
			  cout << "Wsk_a i Wsk_b pokazuja na to samo\n";
	 }
     cout << "\n\n\n\n";
     cout << "Powtarzamy? (t/n): \n\n";
   }
   while (tolower(_getch()) == 't');
   return 0;
}
//---------------------------------------------------------------
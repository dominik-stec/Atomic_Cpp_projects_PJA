/*===================================================*/
/* Przekazywanie tablic do funkcji                   */
/*===================================================*/
#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;
/***************************************************/
void Fun_Wsk1(int *Wsk, int Rozmiar);
void Fun_Tab(int Tab[], int Rozmiar);
void Fun_Wsk2(int *Wsk, int Rozmiar);
/***************************************************/
int main ()
{
  int A[5] = { 5, 10, 15, 20, 25 };
       
      Fun_Tab(A, 5);
      Fun_Wsk1(A, 5);
      Fun_Wsk2(A, 5);
      _getch();
      return 0;
}
/***************************************************/
void Fun_Wsk1(int *Wsk, int Rozmiar)
{
  cout << "\nWewnatrz funkcji Fun_Wska:\n";
  for (int i = 0; i < Rozmiar; i++)
    cout << *(Wsk++) << "\t";
    cout << endl;
}
/**************************************************/
void Fun_Tab(int Tab[], int Rozmiar)
{
  cout << "\nWewnatrz funkcji Fun_Tab:\n";
  for (int i = 0; i < Rozmiar; i++)
    cout << Tab[i] << "\t";
    cout << endl;
}
/**************************************************/
void Fun_Wsk2(int *Wsk, int Rozmiar)
{
  cout << "\nWewnatrz funkcji Fun_Wsk2:\n";
  for (int i = 0; i < Rozmiar; i++)
    cout << Wsk[i] << "\t";
    cout << endl;
}
/************************************************/

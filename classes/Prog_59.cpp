/*-------------------------------------------------------------*/
/*  Program ilustruje zas�anianie sk�adnik�w klasy oraz        */
/*  zmiennych g�obalnych                                       */
/*-------------------------------------------------------------*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>
int Balkon = 50;
void Spiew();

using namespace std;
//------------------------- definicja klasy Opera ---------------
class Opera
{
  public:

     float Balkon;
     void Funkcja();
     void Spiew()
     {
		cout << "funkcja Spiew (z Opery): tra-la-la!\n";
     }
};
//--------------------- koniec definicji klasy Opera ------------
void Opera::Funkcja()
{
  cout << "Balkon (sk�adnik klasy Opera) = "
       << Balkon << endl;
  cout << "Balkon (zmienna globalna) = "
       << ::Balkon << endl;
  //----- definicja zmiennej lokalnej dla danej funkcji --------
  char Balkon = 'A';
  cout << "\nPo definicji zmiennej lokalnej:\n";
  cout << "Balkon (zmienna lokalna) = " << Balkon << endl;
  cout << "Balkon (sk�adnik klasy Opera) = " << Opera::Balkon << endl;
  cout << "Balkon (zmienna globalna) = " << ::Balkon << endl;
  //----- wywo�anaie funkcji Spiew -----------------------------
  Spiew ();
  int Spiew;
  Spiew = 10;
  //Spiew();			// b�lad w trakcie kompilacji
						// bo nazwa funkcji Spiew jest zaslonieta
  cout << "Po zaslonieciu funkcje Spiew mozna wywolac "
       << "tylko w taki sposob - Opera::Spiew\n";
  Opera::Spiew();
}
//--------------------------------------------------------------
int main ()
{
  Opera Halka;
    Halka.Balkon = 2;
    Halka.Funkcja();
    Spiew();
    Halka.Spiew();
    _getch();
    return 0;
}
//--------------------------------------------------------------
void Spiew()
{
   cout << "zwyk�a funkcja Spiew (nie ma nic wspolnego "
		<< "z klasa Opera)\n";
}

/*======================================================*/
/* Wskaüniki do tablic                                  */
/*======================================================*/
#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;
//---------------------------------------------------------
int main ()
{ int T_i[5];			// definicja tablicy typu int
  double T_d[5];        // definicja tablicy typu float
  int *Wsk_i;			// definicja wskaznika na obiekty int
  double *Wsk_d;		// definicja wskaznika na obiekty float
    
    Wsk_i = &T_i[0];	// inaczej Wsk_i = T_i
    Wsk_d = &T_d[0];	// inaczej Wsk_d = T_d
    cout << "Oto jak przy incrementacji wskaznikow\n"
		 << "zmieniaja sie ukryte w nich adresy: \n";
    for (int i = 0; i < 5; i++, Wsk_i++, Wsk_d++)
    {
       cout << "i = " << i
			<< ", Wsk_i = " << (unsigned long) Wsk_i
			<< ", Wsk_d = " << (unsigned long) Wsk_d << endl;
    }
    _getch();
    return 0;
}
//---------------------------------------------------------
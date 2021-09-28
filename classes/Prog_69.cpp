/*-----------------------------------------------------------------------*/
/* Program umo¿liwia przeliczenia temperatury podanej w jednej ze skal:  */
/* Celsjusza, Fahrenheita lub Kelvina                                    */ 
/* na pozosta³e z tych trzech skal.                                      */
/*-----------------------------------------------------------------------*/

#include <iostream>
#include <conio.h>

using namespace std;

//------------------------------------------------------------------------
class Temp_Kalk
{
  private:
	double Temp;
	char Skala;
  public:
	Temp_Kalk() 
	{
		Temp = 0;
		Skala = 'C';
	}
	~Temp_Kalk()
	{
		cout << "\nUsuwam obiekt klasy Temp_Kalk\n\n";
	}
	void Ustaw_Temperature(double _Temp, char _Skala)
	{
		Temp = _Temp;
		Skala = _Skala;
	}
	void Pokaz_Temperature();
	
};
//------------------------------------------------------------------------------
void Temp_Kalk::Pokaz_Temperature()
{
   double tC=0,tF=0,tK=0;
	 switch (Skala)
	 {
		case 'C': {
					 tC = Temp;
					 tF = 1.8*tC + 32;
					 tK = tC + 273.15;
					 break;
				  }
		case 'F': {
					 tF = Temp;
					 tC = (tF - 32)/1.8;
					 tK = (tF - 32)/1.8 + 273.15;
					 break;
				  }
		case 'K': {
					 tK = Temp;
					 tC = tK - 273.15;
					 tF = (tK - 273.15)*1.8 + 32;
					 break;
				  }
	 }
	 cout << "\nTemperatura w skali Celsiusza:   " << tC << " stopni C\n";
	 cout << "\nTemperatura w skali Fahrenheita: " << tF << " stopni F\n";
	 cout << "\nTemperatura w skali Kelvina:     " << tK << " stopni K\n";
}

//------------------------------------------------------------------------------
int main()
{
  Temp_Kalk Kalkulator;
  double T;			// temperatura wejsciowa
  char S;			// wejsciowa skala temperatur
	cout << "Podaj temperature: ";
	cin >> T;
	cout << "Wybierz wejsciowa skale temperatur (C, F, K): ";
	do
	{
		S = toupper(_getch());
	}
	while (S!='C' && S !='F' && S!='K');
	cout << S << endl << endl;
	Kalkulator.Ustaw_Temperature (T, S);
	cout << "\nPokaz wynik we wszystkich skalach:\n\n ";
	Kalkulator.Pokaz_Temperature();
_getch();
return 0;
}

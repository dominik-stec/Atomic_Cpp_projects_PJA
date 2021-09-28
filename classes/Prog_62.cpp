/*----------------------------------------------------------------*/
/*  Przyk³ad u¿ycia kilku konstruktorów do definiowania obiektów  */
/*----------------------------------------------------------------*/


#include <iostream>
#include <conio.h>

using namespace std;
//----------------------------------------------------
class Prostokat
{
  private:
    int lewo, gora, prawo, dol;
    void Pokaz_Szerokosc();
    void Pokaz_Wysokosc();
  public:
    Prostokat();
    Prostokat(int _l, int _g, int _p, int _d);
    void Wymiary()
     {Pokaz_Szerokosc(); Pokaz_Wysokosc();}
    void Nowe_Parametry(int _l, int _g, int _p, int _d)
     {lewo = _l; gora = _g; prawo = _p; dol = _d;}
};
//----------------------------------------------------

int main()
{
  Prostokat Pierwszy;
  Prostokat Drugi(5,5,50,15);

  cout <<"Oto wymiary pierwszego prostokata:\n";
  Pierwszy.Wymiary();
  cout <<"\nOto wymiary drugiego prostokata:\n";
  Drugi.Wymiary();
  Pierwszy.Nowe_Parametry(10, 25, 89, 49);
  cout <<"\nTeraz wymiary pierwszego prostokata:\n";
  Pierwszy.Wymiary();
  _getch();
  return 0;
}
//-------------------------------------------------

void Prostokat::Pokaz_Szerokosc()
 {
   cout << "Szerokosc = ";
   if (prawo-lewo)
     cout << (prawo-lewo);
     else cout << '0';
   cout << endl;
  }
//---------------------------------------------------
void Prostokat::Pokaz_Wysokosc()
 {
   cout << "Wysokosc = ";
   if (dol-gora)
     cout << (dol-gora);
     else cout << '0';
   cout << endl;
  }
//---------------------------------------------------
Prostokat::Prostokat()
{
  lewo = 0;
  gora = 0;
  prawo = 0;
  dol = 0;
}
//----------------------------------------------------
Prostokat::Prostokat(int _l, int _g, int _p, int _d)
{
  lewo = _l;
  gora = _g;
  prawo = _p;
  dol = _d;
}
//----------------------------------------------------
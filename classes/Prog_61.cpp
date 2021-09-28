/*------------------------------------------------------------*/
/*  Definiowanie i u¿ycie destruktora                         */
/*------------------------------------------------------------*/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
//------- definicja klasy Gadula -------------------------------
class Gadula
{
  int Licz;
  string Tekst;
  public:
    Gadula(int k, string Opis);	// konstruktor
    ~Gadula(void);				// destruktor
    // inne funkcje skˆadowe:
    int Zwracaj() { return Licz; }
    void Schowaj(int x) { Licz = x; }
    void CoTo()
    { cout << Tekst << " ma wartosc: " << Licz << endl; }
};
//------- koniec definicji klasy Gadula -----------------------
Gadula::Gadula(int k, string Opis)	// definicja konstruktora
{
  Tekst = Opis;
  Licz = k;
  cout << "Konstruuje " << Tekst << endl;
}
Gadula::~Gadula()					// definicja destruktora
{
  cout << "Pracuje destruktor (sprzata) "
       << Tekst << endl;
}
//************************************************************
Gadula a(1, "obiekt a (GLOBALNY)" );
Gadula b(2, "obiekt b (GLOBALNY)" );
//************************************************************
int main()
{

  a.CoTo();
  b.CoTo();
  {
    cout << "Poczatek lokalnego zakresu:\n";
    Gadula c(30, "obiekt c (lokalny)" );
    Gadula a(40, "obiekt a (lokalny)" );	// zasˆania globalny
    cout << "\nCo teraz mamy: \n";
    a.CoTo();
    b.CoTo();
    c.CoTo();
    cout << "Do zaslonietego obiektu globalnego mozna jednak dostac sie:\n";
    ::a.CoTo();
    cout << "\nKonczy sie lokalny zakres---------\n";
  }
  cout << "\nJuz jestem poza blokiem\n";
  a.CoTo();
  b.CoTo();
  cout << "Uruchamiam destruktor obiektu a\n";
  a.Gadula::~Gadula();
  cout << "Uruchamiam destruktor obiektu b\n";
  b.Gadula::~Gadula(); 
  cout << "K o n i e c   p r o g r a m u\n";
  _getch();
  return 0;
}


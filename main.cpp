#include <iostream>
#include <fstream>
#include <cstdlib>
#include <unistd.h>
#include <time.h>

using namespace std;

int odp, linia;
string haslo_1, haslo_1_2, nazwa_1, nazwa_1_2, haslo_1_3, nazwa_1_3, haslo_1_4;

fstream plik;

int main() {
  cout << "wpisz 1 by zrobic nowe konta albo 2 by sie zalogowac" << endl;
  cin >> odp;

  if(odp==1)
  {
    haslo:
    cout << "podaj nazwe konta" << endl;
    cin >> nazwa_1;
    cout << "podaj haslo" << endl;
    cin >> haslo_1;
    sleep(5);
    cout << "powtorz haslo" << endl;
    cin >> haslo_1_2;
    if(haslo_1==haslo_1_2)
    {
      plik.open("haslo_1.txt",ios::out | ios::app);

      plik << nazwa_1 << endl;
      plik << haslo_1 << endl;
      plik << haslo_1_2 << endl;

      plik. close();

      goto logowanie;
    }
    else
    {
      cout << "zle haslo" << endl;
      sleep(10);
      goto haslo;
    }
  }
  else if(odp==2)
  {
    logowanie:


    cout << "podaj nazwe konta" << endl;
    cin >> nazwa_1_2;
    sleep(5);
    cout << "podaj haslo" << endl;
    cin >> haslo_1_3;

    while(getline(plik,linia))
    {
      switch(linia)
      {
        case 1: nazwa_1_3 = linia; break;
        case 2: haslo_1_4 = linia; break;
      }
    }
    if(nazwa_1_2==nazwa_1_3&&haslo_1_3==haslo_1_4)
    {
      //program dziala i mozna tu dac kody
    }
  }
  else
  {
    cout << "zla odpowiedzi";
    sleep(5);
    goto logowanie;
  }
}
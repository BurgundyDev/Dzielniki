#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
 int x = 0;

 cout << "Kalkulator dzielnik\242w danej liczby\nTw\242rca - Bartosz Kulczycki\nKod \253r\242d\210\242wy udost\251pniony na github.com/BurgundyDev/Dzielniki\nGNU General Public License v3.0\n";

 cout << "\nWprowad\253 liczb\251: ";

 cin >>x;

 cout << "Dzielniki danej liczby: ";

 for(int i=1;i<=x;i++)
 {
 if (x % i ==0) cout << i<<" ";
 }
 getch();
}

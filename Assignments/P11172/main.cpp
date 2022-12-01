//Daniel 'June' Portillo
//Dr. Griffin
//4883 - Prog. Tech.
//12-1-22
//P11172
#include <iostream>

using namespace std;

int main() {
  int A;
  int B;
  int TestCase;

  cin >> TestCase;
  for(int i = 0; i < TestCase; i++)
    {
      cin >> A >> B;

      if (A < B) {cout << "<\n";}
      else if (A > B) {cout << ">\n";}
      else {cout << "=\n";}
    }
  return 0;
}
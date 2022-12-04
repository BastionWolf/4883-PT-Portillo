//Daniel 'June' Portillo
//Dr. Griffin
//4883 - PT
//12-4-22
//P11854

#include <iostream>
#include <math.h>

using namespace std;

int main() {

  int a, b, c, temp;

  while (true)
    {
      cin >> a;
      cin >> b;
      cin >> c;

      if (a == 0 && b == 0 && c == 0)
      {
        break;
      }
      else if(a < b || a < c)
      {
        if(a < b)
        {
          temp = a;
          a = b;
          b = temp;
        }
        if(a < c)
        {
          temp = a;
          a = c;
          c = temp;
        }

      }
      else if(a == b || a == c)
      {
        cout << "wrong\n";
        continue;
      }

      if ( pow(a,2) == (pow(b,2) + pow(c,2)))
      {
        cout << "right\n";
      }
      else
      {
        cout << "wrong\n";
      }
    }
  return 0;
}
//Daniel 'June' Portillo
//Dr. Griffin
//12-4-22
//4883- Prog. Tech
//P11799
#include <iostream>

using namespace std;

int main() 
{
  int Cases;
  int CreatureNum;
  int a, b;

  cin >> Cases;

  for(int i =1; i <= Cases; i++)
    {
      a = 0;
      cin >> CreatureNum;
      for (int j =0; j < CreatureNum; j++)
        {
          cin >> b;
          if (a < b)
          {
            a = b;
          }
        }
      cout << "Case " << i << ": " << a << '\n';
    }
  return 0;
}
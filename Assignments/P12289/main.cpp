//Daniel Portillo
//Dr. Griffin
//CPS 4883- Prog. Tech
//12-3-22
//P12289 - One- Two- Three
#include <iostream>

using namespace std;

int main() 
{
  int TestCase;
  int One, Two, Three;
  string Num;

  cin >> TestCase;
  for(int i =0; i < TestCase; i++)
    {
      One = 0;
      Two = 0;
      Three = 0;
      cin >> Num;
      
      if(Num[0] == 'o') {One++;}
      else if (Num[0] == 't')
      {
        Two++;
        Three++;
      }
      else{};

      if (Num[1] == 'n') {One++;}
      else if (Num[1] == 'w') {Two++;}
      else if (Num[1] == 'h') {Three++;}
      else{};

      if (Num[2] == 'e') {One++;}
      else if (Num[2] == 'o') {Two++;}
      else if (Num[2] == 'r') {Three++;}
      else{};

      if (One > Two && One > Three)
      {
        cout << 1 << '\n';
      }
      else if (Two > One && Two > Three)
      {
        cout << 2 << '\n';
      }
      else
      {
        cout << 3 << '\n';
      }

    }
  return 0;
}
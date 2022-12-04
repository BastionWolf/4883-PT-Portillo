//Daniel 'June' Portillo
//Dr. Griffin
//4883 Programming Techniques
//12-4-2022
//11498	Division of Nlogonia

#include <iostream>

using namespace std;

int main() {

  int TestCase;
  int XCord, YCord;
  int MidX, MidY;

  cin >> TestCase;
  while(TestCase != 0)
    {
      cin >> MidX >> MidY;
      
      for(int i =0; i < TestCase; i++)
        {
          cin >> XCord >> YCord;

          if (XCord == MidX || YCord == MidY)
          {
            cout << "divisa\n";
          }
          else
          {
            if (YCord > MidY) {cout << 'N';}
            else if (YCord < MidY) {cout << 'S';}
            
            if (XCord > MidX){cout << "E\n";}
            else if (XCord < MidX) {cout << "O\n";}
          }
          //cout << "Next loop: \n";
        }
      cin >> TestCase;
      //cout << "Nest TestCases\n";
    }
  return 0;
}
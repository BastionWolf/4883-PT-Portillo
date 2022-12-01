//Daniel 'June' Portillo
//Dr. Griffin
//4883- Prog. Tech
//11-30-22

#include <iostream>
#include <iomanip>
#include <math.h>
#include <fstream>
using namespace std;

int main() {
  double PI = acos(-1);
  double Length;
  double Width;
  double Radius;
  double Background;
  double Circle;
  int TestCases;
 // ofstream f;

  
  //it took me 2 hours before I realized it
  //was the fact that I was using floats and
  //not doubles that was keeping me 0.01 off
 // f.open("Out");
  cin >> TestCases;
  for (int i =0; i < TestCases; i++)
    {
      cin >> Length;

      Width = (Length *6 /10);
      Radius = Length/5;

      Circle = PI* pow(Radius,2);
      Background = Width * Length -Circle;
      
      cout << fixed <<setprecision(2) << Circle
        << ' ' << setprecision(2) << Background << '\n';
    }

  
//f.close();
  
  return 0;
}
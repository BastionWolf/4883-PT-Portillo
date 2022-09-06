/**
* Daniel Portillo
* 4883-Programming Techniques
* 8-30-2022
*/

#include <iostream>
#include <math.h>

#define endl "\n"

using namespace std;

int main() {
  
  long long A, B;
  //long long a, b;
  //long long MAX = pow(2,32);
  // Code was originally set up 
  // to only accept unsigned
  // int as per requirements.
  // Had to change it to 
  // long long for UVA
  
  while(cin >> A >> B)
    {
      //if ((a <= MAX) && (b <= MAX))
      {
        //A = a;
        //B = b;
        
        if (A >= B)
        {
          cout << (A-B);
        }
        else
        {
          cout << (B-A);
        }
        cout << "\n";
      }
    }    
    return 0;
  }

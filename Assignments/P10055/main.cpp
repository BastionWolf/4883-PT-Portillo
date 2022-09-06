/**
* Daniel Portillo
* 4883-Programming Techniques
* 8-30-2022
*/

#include <iostream>

#define endl "\n"

using namespace std;

int main() {
    int B = 0, A = 0;
    
    while (cin >> A >> B) {

      if (A > B)
      {
        cout << (A-B) <<"\n";
      }
      else
      {
        cout << (B-A) << "\n";
      }
    }
    return 0;
  }

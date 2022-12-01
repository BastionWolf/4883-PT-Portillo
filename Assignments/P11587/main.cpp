#include <iostream>
//#include <fstream>

using namespace std;

int main() {
 // ofstream f;
 // f.open ("Out");
  
  int TeamNum;
  int PlayerNum;
  int MidAge;
  int Captain;
  int PlayerAge;

  cin >> TeamNum;
  for(int i = 1; i <= TeamNum; i++)
    {
      cin >> PlayerNum;
      MidAge = PlayerNum/2 + 1;
      
      for(int j=1; j <= PlayerNum; j++)
      {
        cin >> PlayerAge;
        if (j == MidAge)
        {     
          Captain = PlayerAge;
        }
        

      }
      cout << "Case " << i << ": "<< Captain << '\n';
      
    }
 // f.close();
  return 0;
}
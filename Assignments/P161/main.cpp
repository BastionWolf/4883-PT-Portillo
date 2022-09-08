/**
* Daniel Portillo
* 4883-Programming Techniques
* 9-6-2022
*/

#include <iostream>
#include <iomanip>
#include <math.h>

#define endl "\n"

using namespace std;

int GreenSync (int Num1, int Num2, int NumIter);
void PrintTime(int Seconds);


int main() 
{
  int Light1, Light2, Sync;
  
  cin >> Light1;
  
  while (cin >> Light2)
  {
   // cout << "--> IN\n";
    if ((Light1 == 0) && (Light2 == 0))
    {
      cout << '\n';
      return 0;
    }
    else if (Light2 == 0)
    {
      cin >> Light1;
      PrintTime(Sync);
      
    //  cout << Light1 << "\nDing\n";
    }

    else if (Light1 >= Light2)
    {
     // cout << Light1 << " " << Light2 << " Top\n";
      Sync = (GreenSync(Light1, Light2, 0));
      Light1 = Sync;
    }
    else if (Light1 <= Light2)
    {
   //   cout << Light1 << " " << Light2 << " Bottom\n";
      Sync  = (GreenSync(Light2, Light1, 0));
      Light1 = Sync;
    }
    else
    {cout << "Bruh";}

  
  }
  
    
  return 0;
}

int GreenSync (int Num1, int Num2, int NumIter)
{
  int Cycle1 = (2 * Num1) + (Num1 *NumIter);
  int Cycle2 = 2 *Num2;
  int Lag;
  
  Lag = Cycle1 % Cycle2;

  if ( (NumIter == 0) && (Lag < (Num1 - 5)) && (Lag < (Num2 - 5)) )
  {
    return Cycle1;
  }
  else if ( (NumIter > 0) && (Lag < (Num2 - 5)) )
  {
    return Cycle1;
  }
  else if (Cycle1 >18000)
  {
    return 18001;
  }
  else
  {
    NumIter ++;
    return GreenSync(Num1, Num2, NumIter);
  }

}

void PrintTime (int Seconds)
{
  if (Seconds <= 18000)
  {
    cout << setw(2) << setfill('0') << (Seconds/3600) << ':' 
      << setw(2) << setfill('0') << ((Seconds%3600)/60) << ':'
      << setw(2) << setfill('0') << (Seconds%60) << '\n';
  }
  else
  { cout << "Signals fail to synchronise in 5 hours\n";}
}

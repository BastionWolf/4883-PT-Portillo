//Daniel 'June' Portillo
//Dr. Griffin
//4883-PT
//11-29-22
//UVA Online judge: P10931 Parity

#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {

  //varibles related to data
  int Num;
  int ParAccum;
  int LastBit;

  //varibles related to printing in binary
  bool MostSigBit = false;
  
// Num is the input from data to be tested
cin >> Num;
//Loops until eof varible of 0 is found in data
while (Num != 0)
  {
    //reseting varibles for next Num.
    LastBit = pow(2,30);
    MostSigBit = 0;
    ParAccum = 0;

    cout << "The parity of ";  //Formating

    //checks each bit for parity
    for (int i = 0; i < 31; i++)
    {
      //Checks for 1s
      if ((Num & LastBit) == LastBit)
      {
        MostSigBit = true;
        ParAccum++;
        cout << '1';
      }
      //starts printing 0s after most significant bit is found
      else if (MostSigBit == true)
      {cout << '0';}
      
      LastBit = LastBit>>1; //shifts Comparison number to the right
    }
    cout  << " is " << ParAccum << " (mod 2).\n";
    cin >> Num;
  }
  return 0;
}
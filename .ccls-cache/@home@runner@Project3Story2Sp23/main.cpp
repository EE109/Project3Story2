/******************************************************
* Alabama A&M - EE109 - Spring 2023
* Project 3 Story 2 Template
* 26 January 2023
* By: Prof J Zehnpfennig, PE
* This code starts building the P3S2 code.  It integrates
* and demonstrates iterative looping.
******************************************************/  

#include <iostream>
#include <string>

using namespace std;

int main() 
{ 
  string yesno = "t";  //JZ - user input variable
  int x = 0, f=0;

cout << "How many fish?";
  cin >> f;
  
  for (x = 0; x < 4; x++)
    {
    while ( yesno != "y" && yesno != "Y" )
      {
        cout << "\nPlace bait on the line.\nPress 'y' then <Enter> when done.\n";
        cin >> yesno;
      }
      yesno = "+";
    
    //Add the parts about catching and reeling the fish in.
    
    while ( yesno != "y" && yesno != "Y" )
      {
        cout << "\nRemove fish from the line.\nPress 'y' then <Enter> when done.\n";
        cin >> yesno;
      }
      yesno = "+";
    }


  return 0;
}
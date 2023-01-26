#include <iostream>
#include <string>

using namespace std; //JZ - specifying namespace here saves us from having to explicitly invoke 'std' for each standard keyword


int main() 
{
  string yesno = "#";  //JZ - sting or char will do the trick - using string here in order to limit looping and repitition of instructions.  We set the initial value to something that causes the 'while' conditional loop below to be true.  
  int x = 0, f = 
  //JZ - instruct and wait for cook to get the pot
    while (yesno != "y" && yesno != "Y") //JZ - this line says: "while the value of yesno is not equal to lower-case y and yesno is not equal to Y run the following code within the {}"
      {
          cout << "Go to the rack and get a 6L pot.\nPress 'y' then <Enter> when complete.\n"; //JZ - instructions for the user
          cin >> yesno; //JZ - collect user input
      }
  yesno = "#"; //JZ - resetting yesno to something that will make the following while loop conditions true so that the loop executes

  while (yesno != "y" && yesno != "Y") //JZ - reusing the loop logic
      {
          cout << "Fill the pot with 2L water.\nPress 'y' then <Enter> when complete.\n"; //JZ - instructions for the user
          cin >> yesno; //JZ - collect user input
      }
  yesno = "#"; //JZ - resetting yesno 
  
  
}
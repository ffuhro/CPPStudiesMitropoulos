// Switch Statement

/*
 * Ask the user what grade they expect on an exam and
 * tell them what they need to score to get it.
*/

#include <iostream>
using namespace std;

int main () {
  
  char letter_grade {};
  cout << "Enter the letter grade you expect on the exam: ";
  cin >> letter_grade;
  
  switch (letter_grade){
    case 'a':
    case 'A': 
      cout << "You need a 90 or above, study hard!" << endl;
      break;
    case 'b':
    case 'B':
      cout << "You need a 80 or above, go study some more" << endl;
      break;
    case 'c':
    case 'C':
      cout << "You need a 70 or above, probably do not need anything" << endl;
      break;
    case 'd':
    case 'D':
      cout << "You need a 60 or above, you should strive for a better grade, huh?" << endl;
      break;
    case 'f':
    case 'F':
    {
      char confirm {};
      cout << "Are you sure(Y/N)?";
      cin >> confirm;
      
      if (confirm == 'Y' || confirm == 'y') {
        cout << "Ok, do your worst" << endl;
      }
      else if (confirm == 'n' || confirm == 'N') {
        cout << "Good, go study!" << endl;
      }
      else {
        cout << "Illegal choice" << endl;
      }
      
      
      break;
    }
    default:
      cout << "Sorry, thats not a valid grade" << endl;
  }
  
  
  
  cout << endl;
  return 0;
}
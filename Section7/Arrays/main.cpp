// Arrays

#include <iostream>

using namespace std;

int main () {
  /*
  char vowels[] {'a','e','i','o','u'};
  cout << "\nThe first vowel is: " << vowels[0] << endl;
  cout << "The last vowel is: " << vowels[4] << endl;
  
  cin >> vowels[5];
  cout << vowels[5];
  
  */
  
  /*
  double hi_temps[] {90.1, 89.8, 77.5,81.6};
  cout << "\nThe first high temperature is: "<< hi_temps[0] << endl;
  
  hi_temps [0] = 100.7;
  
  
  cout << "The first high temperature is now: " << hi_temps[0] << endl;
  */
  
  int test_scores[5]{};
  
  cout << "\nScore at index 0: " << test_scores[0] << endl;
  cout << "Score at index 1: " << test_scores[1] << endl;
  cout << "Score at index 2: " << test_scores[2] << endl;
  cout << "Score at index 3: " << test_scores[3] << endl;
  cout << "Score at index 4: " << test_scores[4] << endl;
  
  cout << "\n Enter 5 test scores \n";
  
  cin >> test_scores[0];
  cin >> test_scores[1];
  cin >> test_scores[2];
  cin >> test_scores[3];
  cin >> test_scores[4];
  
  cout << "\n Score at index 0: " << test_scores[0] << endl;
  
  cout << "\nScore at index 0: " << test_scores[0] << endl;
  cout << "Score at index 1: " << test_scores[1] << endl;
  cout << "Score at index 2: " << test_scores[2] << endl;
  cout << "Score at index 3: " << test_scores[3] << endl;
  cout << "Score at index 4: " << test_scores[4] << endl;
  
  cout << "\nThis array is saved at: " << test_scores << endl;
  
  
  return 0;
}
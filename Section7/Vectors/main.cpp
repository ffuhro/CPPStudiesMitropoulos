#include <iostream>
#include <vector>

using namespace std;

int main () {
  //vector<char> vowels;
  //vector<char> vowels (5);
  vector<char> vowels {'a','e','i','o','u'};
  
  cout << vowels[0] << endl;
  cout << vowels[4] << endl; 
  
  //vector<int> test_score (3); // 3 elements all initialized to zero
  //vector<int> test_score (3, 100); // 3 elements all initialized to 100
  vector <int> test_scores{100,98,89};
  
  cout << "\n Test scires ysubg array syntax: " << endl;
  cout << test_scores[0] << endl;
  cout << test_scores[1] << endl;
  cout << test_scores[2] << endl;
  
  cout << "\n Test scores using vector syntax: " << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;
  cout << "\n There are " << test_scores.size() << " scores in the vector" << endl;
  
  cout << "\n Enter 3 test scores: ";
  cin >> test_scores.at(0);
  cin >> test_scores.at(1);
  cin >> test_scores.at(2);
  
  cout << "\n Updated test scores: "<< endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;
  
  //=====================================================================//
  cout << "\n Enter a test score to add to the vector: ";
  
  int score_to_add {0};
  cin >> score_to_add;
  
  test_scores.push_back(score_to_add);
  
  cout << "\n Enter one more test score do add to the vector: ";
  
  cin >> score_to_add;
  
  test_scores.push_back(score_to_add);
  
  cout << "\n Test scores are now: " << endl;
  
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;
  cout << test_scores.at(3) << endl;
  cout << test_scores.at(4) << endl;
  
  cout << "\n There are now " << test_scores.size() << " scores in the vector" << endl;
  
    return 0;
}
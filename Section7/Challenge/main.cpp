#include <iostream>
#include <vector>

using namespace std;

int main () {
  vector<int> vector1;
  vector<int> vector2;
  
  // Declaring 2 empty vectors of integers
  // named vector 1 and vector 2, respectively
  
  vector1.push_back(10);
  vector1.push_back(20);
  
  cout << vector1.at(0) << endl;
  cout << vector1.at(1) << endl;
  cout << "vector1 contains " << vector1.size() << " elements." << endl;
  
  vector2.push_back(100);
  vector2.push_back(200);
  
  cout << "\n" << vector2.at(0) << endl;
  cout << vector2.at(1) << endl;
  cout << "vector2 contains " << vector2.size() << " elements." << endl;
  
  vector<vector<int>> vector_2d;
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);
  
  cout << endl << vector_2d.at(0).at(0) << " ";
  cout << vector_2d.at(1).at(0) << endl;
  cout << vector_2d.at(0).at(1) << " ";
  cout << vector_2d.at(1).at(1) << endl;
  
  cout << "\nChanged vector1 at index 0 to 1000" << endl;
  vector1.at(0) = 1000;
  
  cout << endl << vector_2d.at(0).at(0) << " ";
  cout << vector_2d.at(1).at(0) << endl;
  cout << vector_2d.at(0).at(1) << " ";
  cout << vector_2d.at(1).at(1) << endl;
  
  cout << "\n" << vector1.at(0) << " " << vector1.at(1) << endl;
  
  double temperatures [] {10,20,30,40,50};
  cout << temperatures[5] << endl;
  
    return 0;
}
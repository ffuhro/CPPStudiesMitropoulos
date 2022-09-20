#include <iostream>

using namespace std;

int main () {
  
  int total {};
  int num1{}, num2{}, num3{};
  const int count {3};
  
  cout << "Enter 3 integers separated by spaces: ";
  
  cin >> num1 >> num2 >> num3;
  
  total = num1 + num2 + num3;
  
  double average {0.0f};
  
  average = static_cast<double>(total) / count;
  // average = (double)total / count; Old-style
  
  
  cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
  
  cout << "The sum of the numbert were: " << total << endl;
  
  cout << "The average of the numbers were: " << average << endl;
  
  
    return 0;
}
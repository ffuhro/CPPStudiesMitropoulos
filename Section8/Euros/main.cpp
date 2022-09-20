// Section 8
// Convert EUR to USD


#include <iostream>

using namespace std;

int main () {
  
  const double usd_per_eur{1.19};  
  const double brl_per_eur{5.21};
  
  cout << "Welcome to the EUR to BRL converter" << endl;
  cout << "Enter the value in EUR: ";
  
  double euros {0.f};
  double dollar {0.f};
  double real {0.f};
  
  
  cin >> euros; 
  
  real = euros * brl_per_eur;
  
  cout << euros << " euros is equivalent to " << real << " reals" << endl;
  
  cout << endl;
  return 0;
}
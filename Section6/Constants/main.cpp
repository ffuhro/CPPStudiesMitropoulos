#include <iostream>

using namespace std;

int main () {
  
  cout << "Hello, welcome to Francisco's Carpet cleaning Service" << endl;
  
  int NumberOfSmallRooms = 0;
  cout << "\nHow many SMALL rooms would you like cleaned?" << endl;
  cin >> NumberOfSmallRooms;
  
  int NumberOfLargeRooms = 0;
  cout << "\nHow many LARGE rooms would you like cleaned?" << endl;
  cin >> NumberOfLargeRooms;

  const double PricePerSmallRoom {25};
  const double PricePerLargeRoom {35};
  
  const double SalesTax {0.06};
  const int EstimateExpiry {30}; //Days
  
  cout << "\nEstimate for carpet cleaning service" << endl;
  cout << "How many SMALL rooms would you like cleaned: " << NumberOfSmallRooms << endl;
  cout << "How many LARGE rooms would you like cleaned: " << NumberOfLargeRooms << endl;
  cout << "Price per SMALL room: $" << PricePerSmallRoom << endl;
  cout << "Price per LARGE room: $" << PricePerLargeRoom << endl;
  
  cout << "Cost: $" << (PricePerSmallRoom*NumberOfSmallRooms) + (PricePerLargeRoom*NumberOfLargeRooms) << endl;
  cout << "Tax:  $" << (((PricePerSmallRoom*NumberOfSmallRooms)+(PricePerLargeRoom*NumberOfLargeRooms))*SalesTax) << endl;
  cout << "=====================================" << endl;
  cout << "Total estimate: $" << ((PricePerSmallRoom*NumberOfSmallRooms)+(PricePerLargeRoom*NumberOfLargeRooms)) + (((PricePerSmallRoom*NumberOfSmallRooms)+(PricePerLargeRoom*NumberOfLargeRooms))*SalesTax) << endl;
  cout << "This estimate is valid for " << EstimateExpiry << " days." << endl;
  
  cout << endl;
  return 0;
}
#include <iostream>

using namespace std;

// This program will calculate the area of a room in square feet

int main () 
{
  
  cout << "Enter the width of the room: ";
  int RoomWirth {0};
  cin >> RoomWirth;
  
  cout << "Enter the lenght of the room: ";
  int RoomLenght {0};  
  cin >> RoomLenght;
  
  int RoomArea {0};
  RoomArea = RoomWirth*RoomLenght;  
  cout << "The area of the room is "<< RoomArea << endl;
  
  
  return 0;
}
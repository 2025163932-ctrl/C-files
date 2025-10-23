#include <iostream>
using namespace std;


int main() {
  
char array [3] [3] { {'X','O','O'} , {' ', 'X', 'O'} , {'O' ,' ' ,'X'} };



for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
           cout << array [i] [j] ; 
        }
      cout << endl;
    }
    

  
  return 0;
}

#include <iostream>
using namespace std;

int main() {

   char storage [6] = {'B','a','n','a','n','a'};
   int num_of_a = 0;

  for (int i = 0; i < 6; i++) {
    if (storage [i] == 'a')
   num_of_a = num_of_a + 1;
  } 
  cout << "The number of 'a' in Banana is: " << num_of_a << endl;

  
  
  
  return 0;
}
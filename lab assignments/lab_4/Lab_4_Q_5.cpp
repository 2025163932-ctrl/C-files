#include <iostream>
using namespace std;

int main() {
  
    int array [10] {8,12,18,74,2,25,9,13,19,41};
    int i = 1;
    int max = array [i];
    while (i <=10){
        
        if (array [i] > max) {
            max = array [i];
        }
        i ++;
    }
    cout << max;
  return 0;
}
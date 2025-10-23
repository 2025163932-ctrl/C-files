#include <iostream>
using namespace std;

int main() {
 
    int time;

    cout << "Enter the time" << endl;
    cin >> time;

   string results = (time < 12) ?  "Good morning." : "Good evening.";
    cout << results;
    
    
  
  return 0;
}
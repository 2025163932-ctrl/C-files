#include <iostream>
using namespace std;

int main() {
  
    int arr[10];

  
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }


    int searchNum;
    cout << "Enter a number to search for: ";
    cin >> searchNum;

    
    bool found = false;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == searchNum) {
            cout << "Number " << searchNum << " found at index " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Number " << searchNum << " not found in the array.\n";
    }

    return 0;


}

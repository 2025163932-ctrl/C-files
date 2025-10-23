#include <iostream>
using namespace std;

int countPos(int arr[], int size);

int main() {
    int s = 5;
    int arr[s] {1,-3,5,-2,9,-8};

int total = countPos (arr , s);
cout << "the number of positive numbers in the array is: " << total;


  return 0;
}

int countPos(int arr[], int size){
    int num_of_Pos = arr [0];
    for (int j= 1; j < size ; j++){
        if (arr [j] > 0){
            num_of_Pos ++;
        }
    }
    return num_of_Pos;
}
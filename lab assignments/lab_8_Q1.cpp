#include <iostream>
using namespace std;

int findmin(int arr[], int size);

int main() {
    int s = 5;
    int arr[s] {9,2,14,7,5};

int min_val = findmin (arr , s);
cout << "the smallest number of the array is: " << min_val;


  return 0;
}

int findmin(int arr[], int size){
    int min = arr [0];
    for (int j= 1; j < size ; j++){
        if (arr[j] < min){
            min = arr [j];
        }
    }
    return min;
}
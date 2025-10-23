#include <iostream>
using namespace std;

int sum_array(int arr[], int size);

int main() {
    int s = 3;
    int arr[s] {1,2,3};

    int sum =sum_array (arr,s);

    cout << "The sum of the numbers in the array is: " << sum << endl;


  return 0;
}

int sum_array (int arr[], int size) {
    int sum = 0;
    for (int i=0; i < size; i++){
       sum += arr[i];
    }
    return sum;
}
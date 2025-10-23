#include <iostream>
using namespace std;

void print_reverse(int arr[], int size);

int main() {
    int s = 3;
    int arr[s] {10,20,30};

    print_reverse (arr,s);


  return 0;
}

void print_reverse(int arr[], int size){
    for (int j= (size - 1); j >= 0 ; j--){
    cout << arr [j] << endl;
    }

}
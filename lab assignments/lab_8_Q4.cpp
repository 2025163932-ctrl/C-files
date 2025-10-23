#include <iostream>
using namespace std;

string repeat(string text, int reps);

int main() {
    string old_text;
    int how_much;

    cout << "Please enter the word that you would like to be repeated: " << endl;
    cin >> old_text;

    cout << "Please enter the amount of the time the word would be repeated " << endl;
    cin >> how_much;

    if (how_much < 0){
        cout << "";
    } else {
    string new_text= repeat(old_text, how_much );
    cout << new_text;
    }

  return 0;
}

string repeat(string text, int reps){
    string n_text;

    for (int i = 0; i < reps; i++){
        n_text = text + n_text;
    }
  
    return n_text;
}
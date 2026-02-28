#include<iostream>

using namespace std;

int main() {
    string inp;
    int asc;
    cin >> inp;

    asc = static_cast<int>(inp[0]);

    if(asc >= 65 && asc < 97){
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }

    if(asc >= 97) {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }

    if(asc >= 48 && asc < 65){
        cout << "IS DIGIT" << endl;
    }

    return 0;
}
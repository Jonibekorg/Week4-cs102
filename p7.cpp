#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x = n / 10;
    int i = n % 10;

    if (x == 9) {
        cout << "XC";
    } else if (x >= 5) {
        cout << "L";
    } else if (x == 4) {
        cout << "XL";
    } else {
        if (x == 1) cout << "X";
        else if (x == 2) cout << "XX";
        else if (x == 3) cout << "XXX";
    }

    if (i == 9) {
        cout << "IX";
    } else if (i >= 5) {
        cout << "V";
        if (i == 6) cout << "I";
        else if (i == 7) cout << "II";
        else if (i == 8) cout << "III";
    } else if (i == 4) {
        cout << "IV";
    } else {
        if (i == 1) cout << "I";
        else if (i == 2) cout << "II";
        else if (i == 3) cout << "III";
    }

    cout << endl;
    return 0;
}

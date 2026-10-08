#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if((x1 % x2 ==0 && y1 % y2 == 0) || (x2 % x3 == 0 && y2 % y3 == 0) || (x3 % x1 == 0 && y3 % y1 == 0))
        cout << "false" << endl;
     else 
        cout << "true" << endl;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int r, c;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x;
            cin >> x;
            if (x == 1) {
                r = i;
                c = j;
            }
        }
    }
    int moves = abs(r - 2) + abs(c - 2);
    cout << moves << "\n";
    return 0;
}

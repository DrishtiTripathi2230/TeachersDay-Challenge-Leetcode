#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; // number of words

    while (n--) {
        string s;
        cin >> s;

        if (s.length() <= 10) {
            cout << s << endl; // if word is short, print it as is
        } else {
            // print abbreviation: first letter + number in between + last letter
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }
    }

    return 0;
}

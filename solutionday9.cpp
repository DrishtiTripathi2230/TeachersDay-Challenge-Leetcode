#include <iostream>
using namespace std;

int main() {
    int no_of_questions;
    cout << "Enter number of Questions: ";
    cin >> no_of_questions;

    int count = 0;
    int a, b, c;

    for (int i = 0; i < no_of_questions; i++) {
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            count++;
        }
    }

    cout << "Total count: " << count << endl;
    return 0;
}

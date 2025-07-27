#include <iostream>
#include <cctype>   // for isalnum, tolower
#include <string>
using namespace std;  // <-- Now you don't need to write std::string etc.

class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";

        // Step 1: Clean the string
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }

        // Step 2: Check for palindrome
        int n = cleaned.size();
        for (int i = 0; i < n / 2; i++) {
            if (cleaned[i] != cleaned[n - 1 - i]) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (sol.isPalindrome(input)) {
        cout << "True – It's a palindrome!" << endl;
    } else {
        cout << "False – Not a palindrome." << endl;
    }

    return 0;
}

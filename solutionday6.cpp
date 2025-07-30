#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main() {
    Solution sol;

    // Test Cases
    string test1 = "()";
    string test2 = "()[]{}";
    string test3 = "(]";
    string test4 = "([])";
    string test5 = "([)]";

    cout << "Test 1: " << (sol.isValid(test1) ? "true" : "false") << endl;
    cout << "Test 2: " << (sol.isValid(test2) ? "true" : "false") << endl;
    cout << "Test 3: " << (sol.isValid(test3) ? "true" : "false") << endl;
    cout << "Test 4: " << (sol.isValid(test4) ? "true" : "false") << endl;
    cout << "Test 5: " << (sol.isValid(test5) ? "true" : "false") << endl;

    return 0;
}

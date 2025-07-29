class Solution {
public:
    int romanToInt(string s) {
        int value[128] = {0};  // ASCII size
        value['I'] = 1;
        value['V'] = 5;
        value['X'] = 10;
        value['L'] = 50;
        value['C'] = 100;
        value['D'] = 500;
        value['M'] = 1000;

        int total = 0;
        for (int i = 0; i < s.length(); i++) {
            if (value[s[i]] < value[s[i + 1]]) {
                total -= value[s[i]];
            } else {
                total += value[s[i]];
            }
        }
        return total;
    }
};

int main() {
    Solution sol;
    string roman = "MCMXCIV";
    int result = sol.romanToInt(roman);
    cout << "Roman: " << roman << " → Integer: " << result << endl;
    return 0;
}

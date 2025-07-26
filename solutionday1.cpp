#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;

        for (int i = 0; i < nums.size(); i++) { // loop through each element in the vector
            int num = nums[i]; // current number
            int digitCount = 0;

            while (num > 0) { // count the digits in num
                digitCount++;
                num /= 10;    // remove last digit
            }

            if (digitCount % 2 == 0) { // if digit count is even
                result++;              // increment result count
            }
        }

        return result;  
    }
};

int main() {
    Solution sol;
    vector<int> nums = {12, 345, 2, 6, 7896};
    cout << sol.findNumbers(nums) << endl; // Should print 2
    return 0;
}

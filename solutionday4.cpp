//two sum leetcode 1
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {           // first element
        for (int j = i + 1; j < n; j++) {   // second element
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {}; // return empty if no solution
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 6;

    vector<int> res = twoSum(nums, target);

    // print result directly
    if (!res.empty()) {
        cout << res[0] << " " << res[1] << "\n";
    } else {
        cout << "No pair found\n";
    }

    return 0;
}

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> two_sum(const vector<int>& nums, int target) {
    unordered_map<int, int> num_indices;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (num_indices.find(complement) != num_indices.end()) {
            return {num_indices[complement], i};
        }
        num_indices[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = two_sum(nums, target);
    cout << result[0] << " " << result[1] << endl;  // Output: 0 1
    return 0;
}

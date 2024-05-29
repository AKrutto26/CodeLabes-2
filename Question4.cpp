#include <iostream>
#include <unordered_set>
using namespace std;

void find_duplicates(const int* nums, int size) {
    unordered_set<int> seen;
    cout << "Duplicates: ";
    for (int i = 0; i < size; ++i) {
        if (seen.find(nums[i]) != seen.end()) {
            cout << nums[i] << " ";
        } else {
            seen.insert(nums[i]);
        }
    }
    cout << endl;
}

int main() {
    int nums[] = {4, 3, 2, 7, 8, 2, 3, 1};
    find_duplicates(nums, sizeof(nums) / sizeof(nums[0]));
    return 0;
}
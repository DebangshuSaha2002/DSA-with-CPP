#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int shortestContiguousSegment(vector<int>& nums) {
    // Copy the original array to another vector
    vector<int> sortedNums(nums.begin(), nums.end());

    // Sort the copied vector in ascending order
    sort(sortedNums.begin(), sortedNums.end());

    // Find the first and last index where the arrays differ
    int start = -1, end = -1;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != sortedNums[i]) {
            if (start == -1) {
                start = i;
            }
            end = i;
        }
    }

    // Calculate the length of the shortest contiguous segment
    int length = (start == -1) ? 0 : (end - start + 1);
    return length;
}

int main() {
    // Input handling
    vector<int> nums;
    int num;

    cout << "Enter space-separated integers (terminate input with a non-integer): ";
    while (cin >> num) {
        nums.push_back(num);
    }

    // Calculate and display the result
    int result = shortestContiguousSegment(nums);
    cout << "Length of the shortest contiguous segment: " << result << std::endl;

    return 0;
}

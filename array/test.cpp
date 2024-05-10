#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long getMinimumCost(vector<int> arr) {
    long min_cost = LONG_MAX; // Initialize min_cost to a very large value
    
    // Iterate through each possible position to insert the integer
    for (int i = 0; i <= arr.size(); ++i) {
        // Insert an integer between arr[i-1] and arr[i] (or at the beginning/end)
        for (int num = 1; num <= 10; ++num) { // Assuming the range of inserted integers is from 1 to 10
            long cost = 0;
            for (int j = 0; j < arr.size(); ++j) {
                if (j == i) { // Insert the integer at position i
                    cost += abs(num - arr[j]);
                    if (j > 0) cost += abs(arr[j-1] - num);
                    if (j < arr.size() - 1) cost += abs(num - arr[j+1]);
                } else { // Calculate cost without inserting the integer
                    if (j > 0) cost += abs(arr[j] - arr[j-1]);
                }
            }
            min_cost = min(min_cost, cost); // Update min_cost if necessary
        }
    }
    
    return min_cost;
}

int main() {
    // Example usage
    vector<int> arr = {1, 3, 5, 2, 10};
    cout << getMinimumCost(arr) << endl; // Output should be 49
    
    return 0;
}
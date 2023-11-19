#include <iostream>
#include <vector>
using namespace std;

// Function to solve the 0/1 Knapsack problem
int knapSack(int W, vector<int>& wt, vector<int>& val, int n) {
    // Create a 2D matrix to store the maximum values
    vector<vector<int> > dp(n + 1, vector<int>(W + 1, 0));

    // Build the dp table bottom-up
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            // If the current item's weight is less than or equal to the max weight (w)
            // then we can either choose it or not choose it
            if (wt[i - 1] <= w) {
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            }
            // If the current item's weight is greater than the max weight (w),
            // then we can't choose it and the max value is the same as the previous row
            else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W]; // Return the maximum value that can be achieved
}

// Driver function to test the code
int main() {
    int W = 50; // Maximum weight the knapsack can hold

    vector<int> val = { 60, 100, 120 }; // Values of the items
    vector<int> wt = { 10, 20, 30 }; // Weights of the items

    int n = val.size(); // Number of items

    int maxValue = knapSack(W, wt, val, n);

    cout << "Maximum value that can be achieved: " << maxValue << endl;

    return 0;
}
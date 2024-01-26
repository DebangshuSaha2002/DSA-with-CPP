#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxHappinessFactor(const string& s) {
    int n = s.length();

    // Initialize the dp array
    vector<vector<int> > dp(n, vector<int>(n, 0));

    // Fill the dp array
    for (int len = 1; len <= n; ++len) {
        for (int i = 0; i + len - 1 < n; ++i) {
            int j = i + len - 1;
            if (s[i] == s[j]) {
                dp[i][j] = (len == 1) ? 1 : 2 + dp[i + 1][j - 1];
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }

    // Calculate the maximum happiness factor
    int maxFactor = 0;
    for (int i = 0; i < n - 1; ++i) {
        maxFactor = max(maxFactor, dp[0][i] * dp[i + 1][n - 1]);
    }

    return maxFactor;
}

int main() {
    string s;
    cin >> s;

    int result = maxHappinessFactor(s);

    cout << result << endl;

    return 0;
}
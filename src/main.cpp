//
// Created by hanli on 4/6/2026.
//
#include <iostream>
#include "input.h"

std::string outputFile = "./../examples/example.out";

int main() {
    std::map<char, int> charToValue;
    string a, b;
    getInput("./../examples/example.in", charToValue, a, b);

    int n = a.size();
    int m = b.size();

    vector<vector<int>> dp(n+1, vector<int>(m+1));
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 0;
    }
    for (int j = 0; j <= m; j++) {
        dp[0][j] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                dp[i+1][j+1] = dp[i][j] + charToValue[a[i]];
            } else {
                dp[i+1][j+1] = std::max(dp[i][j+1], dp[i+1][j]);
            }
        }
    }

    std::ofstream outStream(outputFile);
    if (!outStream.is_open()) {
        throw std::runtime_error("Error opening output file");
    }

    std::cout << dp[n][m] << std::endl;
    outStream << dp[n][m] << std::endl;

    string result;

    int i = n;
    int j = m;
    while (i!=0 && j!=0) {
        if (a[i-1] == b[j-1]) {
            result = a[i-1] + result;
            i--; j--;
        } else {
            if (dp[i-1][j] > dp[i][j-1]) {
                i--;
            } else {
                j--;
            }
        }
    }

    std::cout << result << std::endl;
    outStream << result << std::endl;
    outStream.close();
    return 0;
}
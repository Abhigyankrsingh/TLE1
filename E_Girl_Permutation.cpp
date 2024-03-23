#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1e9 + 7;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact = (1LL * fact * i) % MOD;
    }
    return fact;
}

int power(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (1LL * res * a) % MOD;
        }
        a = (1LL * a * a) % MOD;
        b /= 2;
    }
    return res;
}

int countPermutations(vector<int>& peaks, int n) {
    peaks.insert(peaks.begin(), 0); // Add 0 at the beginning for convenience
    peaks.push_back(n + 1); // Add n+1 at the end for convenience

    int numSegments = peaks.size() - 1;
    vector<int> segmentSizes;
    for (int i = 1; i < peaks.size(); ++i) {
        int size = peaks[i] - peaks[i - 1] - 1;
        if (size > 0) {
            segmentSizes.push_back(size);
        }
    }

    int totalSegments = 0;
    for (int size : segmentSizes) {
        totalSegments += size;
    }

    int numerator = factorial(totalSegments);
    for (int size : segmentSizes) {
        numerator = (1LL * numerator * power(factorial(size), MOD - 2)) % MOD;
    }

    int denominator = 1;
    for (int i = 1; i <= numSegments; ++i) {
        denominator = (1LL * denominator * factorial(peaks[i] - peaks[i - 1] - 1)) % MOD;
    }

    int invDenominator = power(denominator, MOD - 2);
    int result = (1LL * numerator * invDenominator) % MOD;
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m1, m2;
        cin >> n >> m1 >> m2;

        vector<int> prefixMax(m1), suffixMax(m2);
        for (int i = 0; i < m1; ++i) {
            cin >> prefixMax[i];
        }
        for (int i = 0; i < m2; ++i) {
            cin >> suffixMax[i];
        }

        vector<int> peaks;
        for (int p : prefixMax) {
            peaks.push_back(p);
        }
        for (int s : suffixMax) {
            peaks.push_back(s);
        }

        int result = countPermutations(peaks, n);
        cout << result << "\n";
    }

    return 0;
}










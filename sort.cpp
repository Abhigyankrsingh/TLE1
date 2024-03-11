#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    pair<int, int> ab[4] = {{3, 4}, {4, 2}, {-4, 23}, {4, 4}};
    
    // Sorting the array of pairs
    sort(ab, ab + 4);

    // Printing the sorted pairs
    for (auto [x, y] : ab) {
        cout << x << " " << y << endl;
    }

    return 0;
}

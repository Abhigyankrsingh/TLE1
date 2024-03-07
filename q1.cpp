#include <iostream>

using namespace std;

#define endl '\n'
#define int long long int

signed main() {
    int a, b;
    cin >> a >> b;

    if (a >= b) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    cout << endl;  // Print endl to ensure output is flushed

    return 0;
}

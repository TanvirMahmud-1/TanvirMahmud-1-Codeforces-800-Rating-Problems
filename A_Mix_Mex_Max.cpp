#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        bool possible = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > 1) possible = false; // can't fix numbers ≥ 2
        }
        cout << (possible ? "YES" : "NO") << "\n";
    }

    return 0;
}

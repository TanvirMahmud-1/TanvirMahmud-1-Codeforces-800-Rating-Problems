<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    vector<char> digits;
    for (char c : s) {
        if (c != '+') digits.push_back(c);
    }
    sort(digits.begin(), digits.end());
    for (size_t i = 0; i < digits.size(); ++i) {
        if (i > 0) cout << '+';
        cout << digits[i];
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    vector<char> digits;
    for (char c : s) {
        if (c != '+') digits.push_back(c);
    }
    sort(digits.begin(), digits.end());
    for (size_t i = 0; i < digits.size(); ++i) {
        if (i > 0) cout << '+';
        cout << digits[i];
    }
    return 0;
>>>>>>> cf8ce1527faba0e58405d037dc27d3a8d53ff0ec
}
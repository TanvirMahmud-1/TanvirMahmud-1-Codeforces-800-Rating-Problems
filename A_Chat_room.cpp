<<<<<<< HEAD
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    string target = "hello";
    int j = 0;
 
    for (char c : s) {
        if (c == target[j]) {
            j++;
            if (j == (int)target.size()) break;
        }
    }
 
    cout << (j == (int)target.size() ? "YES\n" : "NO\n");
    return 0;
=======
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    string target = "hello";
    int j = 0;
 
    for (char c : s) {
        if (c == target[j]) {
            j++;
            if (j == (int)target.size()) break;
        }
    }
 
    cout << (j == (int)target.size() ? "YES\n" : "NO\n");
    return 0;
>>>>>>> cf8ce1527faba0e58405d037dc27d3a8d53ff0ec
}
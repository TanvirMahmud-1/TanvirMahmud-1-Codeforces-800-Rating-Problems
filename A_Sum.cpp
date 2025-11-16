<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; 
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
 
        if (a == b + c || b == a + c || c == a + b)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; 
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
 
        if (a == b + c || b == a + c || c == a + b)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
    return 0;
>>>>>>> cf8ce1527faba0e58405d037dc27d3a8d53ff0ec
}
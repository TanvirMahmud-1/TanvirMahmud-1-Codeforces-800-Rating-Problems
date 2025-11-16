#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int x, y;
        cin >> x >> y;
        int v = x - y + 1;
        
        if (v >= 0 && v % 9 == 0) 
        {
            cout << "YES" << endl;
        } 
        
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
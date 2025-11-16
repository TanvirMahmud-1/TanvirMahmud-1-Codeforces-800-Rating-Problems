#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        long long R0, X;
        int D, n;
        cin >> R0 >> X >> D >> n;
        
        string s;
        cin >> s;
        
        long long low = R0, high = R0;
        int rated = 0;
        
        for (int i = 0; i < n; i++) 
        {
            char c = s[i];
            
            if (c == '1') {
                rated++;
                low = max(0LL, low - D);
                high = high + D;
            } 
            else {
                if (low >= X) continue;
                rated++;
                long long newLow = max(0LL, low - D);
                long long newHigh = min((long long)X - 1, high + D);
                low = newLow;
                high = newHigh;
            }
        }
        cout << rated << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt1 = 0;
        for (char c : s) 
        {
           if (c == '1') 
               cnt1++;
        }
        int cnt0 = n - cnt1;

        int ans = cnt1 * (cnt1 - 1) + cnt0 * (cnt1 + 1);
        cout << ans << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    
    for (char c : s)
    {
        if (c == '4' || c == '7')
            cnt++;
    }

    if (cnt == 0)
    {
        cout << "NO" <<endl;
        return 0;
    }

    int x = cnt;
    
    while (x > 0)
    {
        int d = x % 10;
        if (d != 4 && d != 7)
        {
            cout << "NO" <<endl;
            return 0;
        }
        x = x / 10;
    }

    cout << "YES" <<endl;
    return 0;
}
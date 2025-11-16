#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int a, b;
        cin >> a >> b;

        int l = lcm(a, b);
        int ans = (a != l) + (b != l);

        cout << ans << endl;
    }
    return 0;
}
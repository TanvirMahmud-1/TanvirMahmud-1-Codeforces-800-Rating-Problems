#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);

    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int ans = INT_MAX;
    int diff = 0;
    
    for (int i = 0; i + n - 1 < m; i++)
    {
        diff = v[i + n - 1] - v[i];
        ans = min(ans, diff);
    }

    cout << ans << endl;
    return 0;
}
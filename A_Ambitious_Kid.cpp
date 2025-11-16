#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int min_ops = INT_MAX;

    for (int i = 0; i < n; i++) 
    {
        min_ops = min(min_ops, abs(v[i]));
    }

    cout << min_ops << endl;
    return 0;
} 
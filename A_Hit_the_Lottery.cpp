#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v = {100, 20, 10, 5, 1};
    int count = 0;

    for (auto x : v) 
    {
        count += n / x;
        n %= x;
    }

    cout << count << endl;
}
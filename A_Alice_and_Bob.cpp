#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    

    int t; 
    if(!(cin >> t))
         return 0;
         
    while (t--) 
    {
        int n; ll a;
        cin >> n >> a;
        vector<ll> v(n);
        
        for (int i = 0; i < n; ++i)
              cin >> v[i];
        
        auto lb = lower_bound(v.begin(), v.end(), a);
        auto ub = upper_bound(v.begin(), v.end(), a);
        int less_cnt = int(lb - v.begin());          
        int greater_cnt = int(v.end() - ub);        

        
        if (less_cnt >= greater_cnt)
        {
            
            cout << (a - 1) << '\n';
        }
        
        else 
        {
            
            cout << (a + 1) << '\n';
        }
    }
    return 0;
}
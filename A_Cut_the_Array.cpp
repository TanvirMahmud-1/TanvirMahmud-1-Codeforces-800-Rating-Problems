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
        
        int a[105], pref[105];
        
        for (int i = 1; i <= n; i++) 
            cin >> a[i];
            
        pref[0] = 0;
        
        for (int i = 1; i <= n; i++) 
             pref[i] = pref[i-1] + a[i];

        int ansL = 0, ansR = 0;
        int found = 0;

        for (int l = 1; l < n; l++) 
        {
        
            for (int r = l+1; r < n; r++) 
            {
                int sum1 = pref[l] % 3;
                int sum2 = (pref[r] - pref[l]) % 3;
                int sum3 = (pref[n] - pref[r]) % 3;

                if ((sum1 == sum2 && sum2 == sum3) ||
                    (sum1 != sum2 && sum2 != sum3 && sum1 != sum3)) 
                {
                
                    ansL = l;
                    ansR = r;
                    found = 1;
                    break;
                    
                }
            }
            
            if (found) 
                break;
                
        }

        if (found)
            cout << ansL << " " << ansR << "\n";
            
        else
            cout << "0 0\n";
            
    }
    return 0;
}
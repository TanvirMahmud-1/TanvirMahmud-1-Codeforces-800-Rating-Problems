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

        int a[105];
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        int val1 = a[0], cnt1 = 0;
        int val2 = -1, cnt2 = 0;

        for (int i = 0; i < n; i++) 
        {
            if (a[i] == val1) 
            {
                cnt1++;
            } 
            
            else if (val2 == -1) 
            {
                val2 = a[i];
                cnt2++;
            } 
            
            else if (a[i] == val2) 
            {
                cnt2++;
            }
            
            else 
            {
                cnt1 = cnt2 = -1000; 
                break;
            }
            
        }

        if (cnt2 == 0) 
        {
            cout << "Yes\n";
        } 
        
        else 
        {
            int odd = (n + 1) / 2;
            int even = n / 2;

            if ((cnt1 == odd && cnt2 == even) || (cnt2 == odd && cnt1 == even))
                cout << "Yes\n";
                
            else
                cout << "No\n";
                
        }
    }

    return 0;
}


    
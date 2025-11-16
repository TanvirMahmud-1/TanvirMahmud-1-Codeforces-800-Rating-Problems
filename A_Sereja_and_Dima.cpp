
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = n - 1;
    int s = 0, d = 0;
    bool serejaTurn = true;

    while(l <= r) 
    {
        int chosen;
        
        if(a[l] > a[r]) 
        {
            chosen = a[l];
            l++;
        }
        
        else 
        {
            chosen = a[r];
            r--;
        }

        if(serejaTurn)
            s += chosen;
            
        else 
            d += chosen;

        serejaTurn = !serejaTurn;
    }

    cout << s << " " << d << endl;
    return 0;
}
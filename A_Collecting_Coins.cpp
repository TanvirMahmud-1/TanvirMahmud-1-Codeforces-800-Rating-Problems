#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int total = a + b + c + n;
        
        if (total % 3 != 0)
            cout << "NO" << endl;
            
        else
        {
            int x = total / 3;
            
            if (x >= max({a, b, c}))
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
    }
    
    return 0;
}
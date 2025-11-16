#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        int max = 0;
        int max_x = 0;
        
        for(int x = 2; x <= n; x++) 
        {
            int sum = 0;
            
            for(int i = x; i <= n; i += x) 
                sum += i;
                
            if(sum > max) 
            {
                max = sum;
                max_x = x;
            }
        }
        
        cout << max_x << endl;
        
    }
    return 0;
}
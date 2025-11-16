#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    
    if(!(cin>>t)) 
       return 0;
       
    while(t--)
    {
        int n; 
        cin>>n;
        int z=0, neg=0;
        
        for(int i=0;i<n;i++)
        {
            int x; 
            cin>>x;
            
            if(x==0) 
               z++;
               
            else if(x==-1) 
                 neg++;
                 
        }
        int ans = z + (neg%2)*2;
        
        cout<<ans<<endl;
    }
    return 0;
}
#include <bits/stdc++.h> 
using namespace std;
int main() 
{ 
    int n,t;
    cin>>n;

for(int i=0;i<n;i++)
  {
    cin>>t;
    if(t%3==0)
    {
        cout<<"Second\n";
    }

    else
    {
        cout<<"First\n";
    }
  }
    return 0; 
}
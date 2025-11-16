#include <bits/stdc++.h>
using namespace std;
string Tanvir(string b) 
{
    string a = "";
    a += b[0];
    
    for (int i = 1; i < b.size(); i += 2) 
    {
        a += b[i];
    }
    
    return a;
}

int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        string b;
        cin >> b;
        
        cout << Tanvir(b) << endl;
    }
    return 0;
}

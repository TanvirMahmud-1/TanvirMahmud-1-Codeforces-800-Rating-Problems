#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;

    bool allUpper = true;
    
    for (char c : s)
    {
        if (!isupper(c)) 
            allUpper = false;
    }
    
    bool restUpper = true;
    
    for (int i = 1; i < s.size(); i++)
    {
        if (!isupper(s[i]))
            restUpper = false;
            
    } 
       
    if (allUpper || (restUpper && islower(s[0]))) 
    {
        for (char &c : s) 
        {
            if (isupper(c)) c = tolower(c);
            else c = toupper(c);
        }
    }

    cout << s;
    return 0;
}
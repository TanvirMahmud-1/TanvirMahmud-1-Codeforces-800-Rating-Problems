#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int freq[26] = {0};

    for (char c : s) {
        if (c >= 'A' && c <= 'Z') 
        {
            c = c - 'A' + 'a'; 
        }
        
        freq[c - 'a']++;
    }

    int count = 0;
    
    for (int i = 0; i < 26; i++) 
    {
        if (freq[i] > 0) count++;
    }

    if (count == 26)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
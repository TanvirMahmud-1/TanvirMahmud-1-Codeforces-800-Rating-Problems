#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s1;
        cin >> s1;
        string s2;

        string compare = "meow";

        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] >= 'A' && s1[i] <= 'Z')
                s1[i] = s1[i] + 32;
        }

        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s1[i + 1])
                s2.push_back(s1[i]);
        }

        if (compare == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
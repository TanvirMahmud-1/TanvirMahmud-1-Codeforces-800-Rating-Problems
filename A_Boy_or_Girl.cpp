<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    vector<char> ch;

    for (int i = 0; i < s.size(); i++)
    {
        int count = 0;

        for (char a : ch)
        {
            if (a == s[i])
                count++;
        }

        if (count == 0)

            ch.push_back(s[i]);
    }

    if (ch.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    vector<char> ch;

    for (int i = 0; i < s.size(); i++)
    {
        int count = 0;

        for (char a : ch)
        {
            if (a == s[i])
                count++;
        }

        if (count == 0)

            ch.push_back(s[i]);
    }

    if (ch.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
>>>>>>> cf8ce1527faba0e58405d037dc27d3a8d53ff0ec
}
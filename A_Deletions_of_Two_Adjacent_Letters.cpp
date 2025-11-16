<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        char c;
        cin >> s >> c;
        int n = s.size();
        int i = 0;

        for (i = 0; i < n; i++)
        {
            if (s[i] == c && i % 2 == 0)
            {
                break;
            }
        }

        if (i < n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        char c;
        cin >> s >> c;
        int n = s.size();
        int i = 0;

        for (i = 0; i < n; i++)
        {
            if (s[i] == c && i % 2 == 0)
            {
                break;
            }
        }

        if (i < n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
>>>>>>> cf8ce1527faba0e58405d037dc27d3a8d53ff0ec

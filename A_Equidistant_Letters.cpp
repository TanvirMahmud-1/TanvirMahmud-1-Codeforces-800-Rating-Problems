<<<<<<< HEAD
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s;
//         cin >> s;
//         sort(s.begin(), s.end());
//         cout << s << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (s[j] > s[j + 1])
                    swap(s[j], s[j + 1]);
            }
        }

        cout << s << endl;
    }
}
=======
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s;
//         cin >> s;
//         sort(s.begin(), s.end());
//         cout << s << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (s[j] > s[j + 1])
                    swap(s[j], s[j + 1]);
            }
        }

        cout << s << endl;
    }
}
>>>>>>> cf8ce1527faba0e58405d037dc27d3a8d53ff0ec

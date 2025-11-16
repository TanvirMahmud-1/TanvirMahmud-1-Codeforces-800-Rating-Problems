<<<<<<< HEAD
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;

//         if (a + b >= 10 || a + c >= 10 || b + c >= 10)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
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
        int a, b, c;
        cin >> a >> b >> c;

        int flag = 0;

        if (a + b >= 10)
            flag = 1;
        if (a + c >= 10)
            flag = 1;
        if (b + c >= 10)
            flag = 1;

        if (flag==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
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
//         int a, b, c;
//         cin >> a >> b >> c;

//         if (a + b >= 10 || a + c >= 10 || b + c >= 10)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;

//         int flag = 0;

//         if (a + b >= 10 && a + c >= 10 & b + c >= 10)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
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
        int a, b, c;
        cin >> a >> b >> c;

        int flag = 0;

        if (a + b >= 10)
            flag = 1;
        else if (a + c >= 10)
            flag = 1;
        else if (b + c >= 10)
            flag = 1;

        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
>>>>>>> cf8ce1527faba0e58405d037dc27d3a8d53ff0ec

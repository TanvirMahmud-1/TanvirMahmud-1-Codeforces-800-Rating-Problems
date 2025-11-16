<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {

        int a, b;
        cin >> a >> b;

        int mod = a % b;

        if (mod == 0)
            cout << 0 << endl;
        else
            cout << b - mod << endl;
    }

    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {

        int a, b;
        cin >> a >> b;

        int mod = a % b;

        if (mod == 0)
            cout << 0 << endl;
        else
            cout << b - mod << endl;
    }

    return 0;
}
>>>>>>> cf8ce1527faba0e58405d037dc27d3a8d53ff0ec

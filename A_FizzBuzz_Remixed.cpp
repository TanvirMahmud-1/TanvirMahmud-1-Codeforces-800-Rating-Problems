<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int count = (n / 15) * 3;

        for (int i = 0; i <= n % 15; ++i)
        {
            if (i % 3 == i % 5)
                count++;
        }

        cout << count << endl;
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
        int n;
        cin >> n;

        int count = (n / 15) * 3;

        for (int i = 0; i <= n % 15; ++i)
        {
            if (i % 3 == i % 5)
                count++;
        }

        cout << count << endl;
    }

    return 0;
}
>>>>>>> cf8ce1527faba0e58405d037dc27d3a8d53ff0ec

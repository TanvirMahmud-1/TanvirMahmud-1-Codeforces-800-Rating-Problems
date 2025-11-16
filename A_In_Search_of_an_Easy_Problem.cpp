<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;
    int x;
    bool hard = false;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (x == 1)
            hard = true;
    }
    if (hard)
    {
        cout << "HARD"<<endl;
    } 
    else
    {
        cout << "EASY"<<endl;
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;
    int x;
    bool hard = false;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (x == 1)
            hard = true;
    }
    if (hard)
    {
        cout << "HARD"<<endl;
    } 
    else
    {
        cout << "EASY"<<endl;
    }
    return 0;
>>>>>>> cf8ce1527faba0e58405d037dc27d3a8d53ff0ec
}
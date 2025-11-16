<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    int Anton = 0, Danik = 0;
    for (char C : s)
    {
        if (C == 'A')
            Anton++;
        else
            Danik++;
    }
    if ( Anton > Danik )
        cout << "Anton" << endl;
    else if ( Danik > Anton )
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    int Anton = 0, Danik = 0;
    for (char C : s)
    {
        if (C == 'A')
            Anton++;
        else
            Danik++;
    }
    if (  Anton >= Danik)
        cout << "Anton" << endl;
    else if (Danik >= Anton)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
>>>>>>> cf8ce1527faba0e58405d037dc27d3a8d53ff0ec
}
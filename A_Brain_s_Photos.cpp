<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    char pixel;
    int color = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> pixel;
            if (pixel == 'C' || pixel == 'M' || pixel == 'Y')
                color = 1;
        }
    }
    cout << "#";
    
    if (color == 1)
        cout << "Color";
    else
        cout << "Black&White";
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    char pixel;
    int color = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> pixel;
            if (pixel == 'C' || pixel == 'M' || pixel == 'Y')
                color = 1;
        }
    }
    cout << "#" << (color ? "Color" : "Black&White");
    return 0;
}
>>>>>>> cf8ce1527faba0e58405d037dc27d3a8d53ff0ec

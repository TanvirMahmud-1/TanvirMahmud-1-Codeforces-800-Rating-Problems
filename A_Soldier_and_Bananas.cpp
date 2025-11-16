<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
    int x, n, y;
    cin >> x >> n >> y;
    int cost = x * y * (y + 1) / 2;

    int need = cost - n;
    if (need < 0)
        need = 0;
        cout << need << endl;
    return 0;
}
=======
#include <iostream>
using namespace std;

int main()
{
    int x, n, y;
    cin >> x >> n >> y;
    int cost = x * y * (y + 1) / 2;

    int need = cost - n;
    if (need < 0)
        need = 0;

        cout << need << endl;
    return 0;
}
>>>>>>> cf8ce1527faba0e58405d037dc27d3a8d53ff0ec

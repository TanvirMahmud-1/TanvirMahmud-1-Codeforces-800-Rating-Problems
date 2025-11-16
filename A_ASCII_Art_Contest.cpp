#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int g, c, l;
    cin >> g >> c >> l;
    
    int scores[] = {g, c, l};
    sort(scores, scores + 3);
    
    if (scores[2] - scores[0] >= 10) 
    {
        cout << "check again" << endl;
    } 
    
    else 
    {
        cout << "final " << scores[1] << endl;
    }
    return 0;
}

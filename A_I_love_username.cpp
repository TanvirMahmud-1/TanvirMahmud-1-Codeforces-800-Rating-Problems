#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int points[n];
    
    for (int i = 0; i < n; i++) 
        cin >> points[i];

    int amazing = 0;
    int min = points[0];
    int max = points[0];

    for (int i = 1; i < n; i++) 
    {
        
        if (points[i] < min) 
        {
            amazing++;
            min = points[i];
        }
        
        else if (points[i] > max) 
        {
            amazing++;
            max = points[i];
        } 
        
    }

    cout << amazing;
}
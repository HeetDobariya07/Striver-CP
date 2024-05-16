#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int count = 0;
    
    if (m>n)
        cout << "-1" << endl;
    else 
    {
        if (n % 2 == 0)
            count = n / 2;
        else
            count = (n / 2) + 1;
        while (count%m != 0)
        {
            count++;
        }
        cout << count << endl;
    }
}
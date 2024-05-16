# include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin >> n >> m;
    int count = 0;
    if (m%n == 0)
    {
        int d = m/n;
        while(d%2 == 0)
        {
            d /= 2;
            count++;
        }
        while(d%3 == 0)
        {
            d /= 3;
            count++;
        }
        if (d == 1)
            cout << count << endl;
        else 
            cout << "-1" << endl;
    }
    else 
        cout << "-1" << endl;
}
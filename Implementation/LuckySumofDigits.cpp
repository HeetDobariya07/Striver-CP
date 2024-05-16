# include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int a=0, b=0;
    while(n>0)
    {
        if (n%7 == 0)
        {
            b = n/7;
            n=0;
            break;
        }
        n -= 4;
        a++;
    }
    if(n==0)
    {
        while(a--) cout<<4;
        while(b--) cout<<7;
    }
    else
        cout << "-1" << endl;
}
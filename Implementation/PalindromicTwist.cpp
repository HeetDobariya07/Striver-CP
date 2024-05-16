# include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,h,d;
    char str[105];
    bool k;

    cin >> t;

    while (t--)
    {
        cin >> n;
        cin >> str;

        h = n/2;
        k = true;

        for (i=0; i<h; i++)
        {
            d = (int)(abs(str[i]-str[n-i-1]));

            if (!(d == 0 || d == 2 ))
            {
                k = false;
                cout << "NO" << endl;
                break;
           }
        }

        if (k)
            cout << "YES" << endl;
    }
}
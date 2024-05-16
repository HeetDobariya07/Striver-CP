# include <bits/stdc++.h>
// #define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    long long a,b,n;
    while(T--)
    {
        // fastread();
        cin >> a >> b >> n;
        int count = 0;
        while(true)
        {
            if (b>a)
            {
                a += b;
                count++;
            }
            else if (b<a)
            {
                b += a;
                count++;
            }
            if(a>n || b>n)
                break;
        }
        cout << count << endl;
    }
}
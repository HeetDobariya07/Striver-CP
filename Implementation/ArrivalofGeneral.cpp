#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxa=0, mina=999, maxi=0, mini=0;
    for (int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        if (a > maxa)
        {
            maxa = a;
            maxi = i;
        }
        if (a <= mina)
        {
            mina = a;
            mini = i;
        }
    }
    int ans = (maxi-1) + (n-mini);
    // cout << maxi << " " << mini << endl;
    // cout << ans << endl;
    if (maxi > mini)
    {
        ans = ans - 1;
    }
    cout << ans << endl;
}
# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max_c = 0;
    int stillnow = 0;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin >> a >> b;
        stillnow -= a;
        stillnow += b;
        max_c = max(max_c, stillnow);
    }
    cout << max_c << endl;
}
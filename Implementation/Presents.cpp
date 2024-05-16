# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 1;
    int ans[n];
    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        ans[x] = count;
        count++;
    }
    for(int i=1; i<=n; i++)
    {
        cout << ans[i] << endl;
    }
}
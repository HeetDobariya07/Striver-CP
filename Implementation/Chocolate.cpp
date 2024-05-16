# include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin >> n;
    int arr[n];
    int ans = 0;
    for (int i=1; i<=n; i++)
    {
        cin >> arr[i];
    }
    int cur = 1e18;
	for(int i=n;i>=1;i--)
	{
		cur = min(cur - 1, arr[i]);
		cur = max(0LL, cur);
		ans += cur;
	}
	cout<<ans<<endl;
    return 0;
}
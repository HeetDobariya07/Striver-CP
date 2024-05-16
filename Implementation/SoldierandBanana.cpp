# include <bits/stdc++.h>
using namespace std;

int main()
{
    long long k,n,w;  // the cost of the first banana, initial number of dollars the soldier has and number of bananas he wants
    cin >> k >> n >> w;
    long long cost = 0;
    cost = k*(w*(w+1)/2);
    // cout << cost << endl;
    if (n < cost)
        cout << (cost-n) << endl;
    else
        cout << 0 << endl;
}
# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[7];
    for (int i=0; i<7; i++)
    {
        cin >> a[i];
    }
    int i = 0;
    int t = a[0];
    while (t < n)
    {
        i++;
        i%=7;
        t += a[i]; 
    }
    cout << i+1 << endl;
}
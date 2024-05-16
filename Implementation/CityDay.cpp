# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v(n);
    for (int &m : v)
    {
        cin >> m;
    }
    for (int i=0; i<n; i++)
    {
        bool flag = true;
        int t = v[i];

        for (int j=i-1; j>=i-x; j--)
        {
            if (j>=0)
            {
                if (t > v[j])
                    flag = false;
            }
        }

        for (int j=i+1; j<=i+y; j++)
        {
            if (j<n)
            {
                if (t > v[j])
                    flag = false;
            }
        }

        if (flag == true)
        {
            cout << i+1 << endl;
            break;
        }
    }
}
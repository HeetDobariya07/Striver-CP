# include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, m;
        cin >> n >> m;
        int count = 0;
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=m; j++)
            {
                char ch;
                cin >> ch;
                if (ch == 'C')
                    continue;
                else if (i==n && ch == 'D')
                    count++;
                else if (j==m && ch == 'R')
                    count++;
            }
        }
        cout << count << endl;
    }
}
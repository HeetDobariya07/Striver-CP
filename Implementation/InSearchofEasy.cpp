# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i=0;
    int ind = 0;
    for (i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            ind = i;
        }
    }
    if (ind == 0)
    {
        cout << "EASY" << endl;
    }
    else if (ind != 0)
    {
        cout << "HARD" << endl;
    }
}
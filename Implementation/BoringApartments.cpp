# include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string n;
        cin >> n;
        int len = n.size();
        int click = 0;
        if (len == 1)
            click += 1;
        else if (len == 2)
            click += 3;
        else if (len == 3)
            click += 6;
        else if (len == 4)
            click += 10;
        int digit = n[0];
        click += (digit - '0' - 1)*10;
        cout << click << endl;
    }
}
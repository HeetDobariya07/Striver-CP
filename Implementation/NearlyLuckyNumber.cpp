# include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int count=0;
    for(auto& digit : x)
    {
        if (digit == '4' || digit == '7')
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
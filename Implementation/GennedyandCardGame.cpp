# include <bits/stdc++.h>
using namespace std;

int main()
{
    string ct;  //card of table
    cin >> ct;
    int i=0;
    for (i=0; i<5; i++)
    {
        string ch;
        cin >> ch;
        if (ch[0] == ct[0] || ch[1] == ct[1])
        {
            cout << "YES" << endl;
            break;
        }
    }
    if (i==5)
        cout << "NO" << endl;
}
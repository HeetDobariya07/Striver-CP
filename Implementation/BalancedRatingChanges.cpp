#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {
        double x;
        cin >> x;
        if (fmod(x, 2) == 0)
            cout << static_cast<int>(x / 2) << endl;
        else if (fmod(x, 2) != 0)
        {
            if (count % 2 == 0)
            {
                cout << static_cast<int>(ceil(x / 2)) << endl;
                count++;
            }
            else
            {
                cout << static_cast<int>(floor(x / 2)) << endl;
                count++;
            }
        }
    }
    return 0;
}

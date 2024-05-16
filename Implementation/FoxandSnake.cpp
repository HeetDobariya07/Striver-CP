# include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    string arr[x][y];
    for (int i=0; i<x; i++)
    {
        for (int j=0; j<y; j++)
        {
            if (i%2 != 0)
            {
                arr[i][j] = '.';
            }
            else
            {
                arr[i][j] = '#';
            }
        }
    }
    int count = 0;
    for (int i=1; i<x; i+=2)
    {
        if (count%2 == 0)
            arr[i][y-1] = "#";

        else if(count%2 != 0)
            arr[i][0] = "#";

        count++;
    }
    for (int i=0; i<x; i++)
    {
        for (int j=0; j<y; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

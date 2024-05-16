# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int x = 0, y = 0;
    int count = 0;
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                x = i; y = j;
            }
        }
    }
    // cout << "Position of 1: " << x << y << endl;
    while(x!=2)
    {
        if(x<2)
        {
            x++; count++;
        }
        else if(x>2)
        {
            x--; count++;
        }
    }
    while(y!=2)
    {
        if(y<2)
        {
            y++; count++;
        }
        else if(y>2)
        {
            y--; count++;
        }
    }
    cout << count << endl;
}
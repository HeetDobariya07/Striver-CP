# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int height = 0;
    while (count <= n)
    {   
        height++;
        count += height*(height+1)/2;
    }
    height--;
    cout << height << endl;
}
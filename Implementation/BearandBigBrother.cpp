# include <bits/stdc++.h>
using namespace std;

int main()
{
    int limak, bob;
    cin >> limak >> bob;
    for (int i=1; ; i++)
    {
        limak *= 3;
        bob *= 2;
        if (limak > bob) 
        {
            cout << i << endl;
            break;
        }
    }
}
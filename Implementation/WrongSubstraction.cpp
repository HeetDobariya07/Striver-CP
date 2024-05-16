# include <bits/stdc++.h>
using namespace std;

int main()
{
    long long num;
    int n;
    cin >> num;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        if(num%10 != 0)
        {
            num = num-1;
        }
        else if(num%10 == 0)
        {
            num = num/10;
        }
    }
    cout << num << endl;
}
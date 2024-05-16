# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        sum += (i+1)*(n-i)-i;
    }
    cout<< sum <<endl;
    // 1*(n-0)-0 + 2*(n-1)-1 + 3*(n-2)-2 + ... + n*(n-(n-1))-(n-1)
}
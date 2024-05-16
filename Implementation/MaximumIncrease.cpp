# include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    int count = 1;
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        arr[i] = num;
    }
    for(int i=1; i<n; i++)
    {
        if (arr[i]>arr[i-1])
        {
            count++;
        }  
        else 
        {
            if (count>ans)
                ans = count;
            count = 1;
        } 
    }
    if (count>ans)
        ans = count;
        
    cout << ans << endl;
    
}
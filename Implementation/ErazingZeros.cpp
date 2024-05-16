# include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        string num;
        cin >> num;
        int len = num.size();
        int l=0;
        int r=0;
        int count = 0;
        for(int i=0; i<len; i++)
        {
            if (num[i] == '1')
            {
                l = i;
                break;
            } 
        }
        for(int j=len; j>0; j--)
        {
            if (num[j] == '1')
            {
                r = j;
                break;
            } 
        }
        // cout << l << " " << r << endl;
        for(int k=l; k<=r; k++)
        {
            if ((num[k] == '0') && (l != r))
                count++;
        }
        cout << count << endl;
    }
}
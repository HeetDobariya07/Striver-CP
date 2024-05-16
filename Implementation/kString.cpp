# include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    string s; 
    cin >> s;
    char ch;
    int count = 0;
    int len = s.size();
    sort(s.begin(),s.begin()+s.size());
	for(int i=0; i<len; i++)
    {
	    if(i%k==0)
        {
	       ch=s[i]; 
	    }
	    if(s[i]==ch)
        {
	        count++;
	    }
	}
	if(len==count && count%k==0)
    {
	    for(int i=0; i<k; i++)
        {
	        for(int l=0; l<s.size(); l+=k)
            {
	            cout<<s[l];
	        }
	    }
	}
    else
    {
	    cout<<"-1" << endl;
	}
}
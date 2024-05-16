# include<bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    cin >> t;
    string s = t;
    int len = s.size();
    int count = 0;
    for (int i=1; i<len; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            count++;
    }
    if (count == (len-1))
    {
        if (s[0] >= 97 && s[0] <= 122)
            s[0] -= 32;
        else if (s[0] >= 65 && s[0] <= 90)
            s[0] += 32;
        for (int i=1; i<len; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
                s[i] += 32;
        }
        cout << s << endl;
    }
    else
        cout << t << endl;
}
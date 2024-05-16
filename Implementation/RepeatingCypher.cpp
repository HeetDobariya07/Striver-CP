#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int gap = 1;
    int index = 0;
    while (index < n)
    {
        cout << s[index];
        index += gap;
        gap++;
    }
}
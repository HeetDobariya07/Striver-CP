# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int character = str[0];
    // cout << character << endl;
    if (character >= 97 && character <= 122)
    {
        character -= 32;
        str[0] = character;
        cout << str << endl;
    }
    else
    {
        cout << str << endl;
    }
}
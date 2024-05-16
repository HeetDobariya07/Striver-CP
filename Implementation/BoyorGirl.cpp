# include<bits/stdc++.h>
using namespace std;

int main()
{
    string user;
    cin >> user;
    set<char> character;
    for (auto& letter : user)
    {
        character.insert(letter);
    }
    if (character.size()%2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}
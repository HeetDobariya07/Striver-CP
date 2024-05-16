# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int arr[1001];
    int count = 0;
    for (int i=0; i<str.size(); i++)
    {
        if (str[i] == '+')
        {
            continue;
        }
        else
        {
            arr[count] = str[i] - '0';
            count++;
        }
    }
    sort(arr, arr+count);
    for (int i=0; i<count; i++)
    {
        cout << arr[i];
        if (i == count-1)
            break;
        cout << '+';
    }
    cout << endl;
}
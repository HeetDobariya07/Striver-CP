#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // no. of instrument
    int k; // no. of days
    cin >> n;
    cin >> k;
    pair<int, int> c;
    vector<pair<int, int>> d;
    int t;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        c = make_pair(t, i + 1);
        d.push_back(c);
    }
    sort(d.begin(), d.end());

    int count = 0;
    int sum = 0;
    for (auto p : d)
    {
        sum += p.first;
        if (sum > k)
            break;
        count++;
    }

    cout << count << endl;

    for (int i = 0; i < count; i++)
    {
        cout << d[i].second << " ";
    }
    return 0;
}
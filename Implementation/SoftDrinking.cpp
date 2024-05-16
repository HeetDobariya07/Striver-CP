# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // friends
    int k; // no. of bottles
    int l; // ml of drink in one
    int c; // limes
    int d; // slices
    int p; // grams of salt
    int nl; // required ml of drink
    int np; // requrired gm of salt
    cin >> n;
    cin >> k;
    cin >> l;
    cin >> c;
    cin >> d;
    cin >> p;
    cin >> nl;
    cin >> np;

    int drink = (k*l)/nl;
    // cout << drink << endl;
    int lime = c*d;
    // cout << lime << endl;
    int salt = p/np;
    // cout << salt << endl;

    int x = min(drink, lime);
    int toast = min(x, salt)/n;
    cout << toast << endl;
}
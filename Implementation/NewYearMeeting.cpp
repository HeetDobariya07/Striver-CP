# include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    for (int i=0; i<3; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }
    for (int i=0; i<3; i++)
    {
        for (int j=i; j<3; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int x = (arr[1] - arr[0]) + (arr[2] - arr[1]);
    cout << x << endl;
}
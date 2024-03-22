#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, arr[100001];
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a;
        arr[a] = i;
    }
    int m, b;
    cin >> m;
    long long Vasya(0), Petya(0);
    while (m--)
    {
        cin >> b;
        Vasya += arr[b];
        Petya += (n + 1 - arr[b]);
    }
    cout << Vasya << " " << Petya << endl;
    return 0;
}
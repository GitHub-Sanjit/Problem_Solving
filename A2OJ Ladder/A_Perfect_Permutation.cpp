#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(i + 1);
    }
    if (n % 2 == 1)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            swap(v[i], v[i + 1]);
            i++;
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[2 * n];
    for (int i = 0; i < 2 * n; i = i + 2)
    {
        cin >> arr[i];
        cin >> arr[i + 1];
    }
    int A = 0, B = 0, C = 0, D = 0;
    for (int i = 0; i < 2 * n; i = i + 2)
    {
        if (arr[i] == 0)
        {
            A++;
        }
        else
        {
            B++;
        }
        if (arr[i + 1] == 0)
        {
            C++;
        }
        else
        {
            D++;
        }
    }
    int E = min(A, B) + min(C, D);
    cout << E << endl;
    return 0;
}
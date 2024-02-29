#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    else if (n == 2)
    {
        return true;
    }
    else if (n % 2 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 3; i <= sqrt(n); i += 2)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    int n = a + 1;
    int l = 1;
    while (l == 1)
    {
        int A = is_prime(n);
        if (A)
        {
            l = false;
        }
        else
        {
            n++;
        }
    }
    if (b == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

//
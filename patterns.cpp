#include <bits/stdc++.h>
using namespace std;
void sol(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= i && j <= n)
            {

                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    sol(n);
    return 0;
}
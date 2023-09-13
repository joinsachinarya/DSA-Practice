#include <bits/stdc++.h>
using namespace std;

void sol()
{
    for (int i = 1; i <= 4; i++)
    {
        // every rows goes from i to i+2 and then back to i
        for (int j = i; j <= i + 2; j++)
        {
            if (j >= i)
            {
                cout << j;
            }
            else
            {
                cout << "_";
            }
        }
        cout << endl;
    }
}

int main()
{
    sol();
    return 0;
}
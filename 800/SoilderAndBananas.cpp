#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int counter = 1;
    int totalCost = 0;
    while (w--)
    {
        totalCost += (counter * k);
        counter++;
    }
    if (totalCost <= n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << totalCost - n << endl;
    }
    return 0;
}
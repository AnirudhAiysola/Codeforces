#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<int> coins(n);
    int val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        coins[i] = val;
    }
    sort(coins.begin(), coins.end());
    int sum = accumulate(coins.begin(), coins.end(), 0);
    sum = sum / 2;
    int j = n - 1, currSum = 0;
    while (j >= 0)
    {
        currSum += coins[j--];
        ans++;
        if (currSum > sum)
            break;
    }
    cout << ans << endl;
    return 0;
}
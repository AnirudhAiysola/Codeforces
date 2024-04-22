#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    int e;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        nums[i] = e;
    }
    int ans = 1;
    int curr = 1;
    int prev = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (prev <= nums[i])
        {
            curr++;
            ans = max(ans, curr);
        }
        else
        {
            curr = 1;
        }
        prev = nums[i];
    }
    cout << ans << endl;
    return 0;
}
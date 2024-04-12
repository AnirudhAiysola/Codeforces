#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    int ans = 0;
    cin >> n >> h;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x <= h)
        {
            ans++;
        }
        else
        {
            ans += 2;
        }
    }
    cout << ans << endl;
    return 0;
}
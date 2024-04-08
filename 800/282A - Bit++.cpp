#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    int ans = 0;

    while (n--)
    {
        cin >> s;
        ans = (s[1] == '+') ? (ans + 1) : (ans - 1);
    }
    cout << ans << endl;
    return 0;
}
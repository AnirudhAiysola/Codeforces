#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> sets(n);
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sets[i] = x;
    }
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        if (sets[i] < 0)
        {
            pq.push(sets[i] * -1);
        }
        int ans = 0;
        while (!pq.empty() && m--)
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << endl;
        return 0;
    }
}
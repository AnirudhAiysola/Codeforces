#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> puzzles(m);
    int s;
    for (int i = 0; i < m; i++)
    {
        cin >> s;
        puzzles[i] = s;
    }
    sort(puzzles.begin(), puzzles.end());
    int diff = puzzles[n - 1] - puzzles[0];
    for (int i = 1; i <= m - n; i++)
    {
        diff = min(diff, puzzles[i + n - 1] - puzzles[i]);
    }
    cout << diff << endl;
    return 0;
}
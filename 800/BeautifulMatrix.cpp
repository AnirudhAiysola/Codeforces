#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    vector<vector<int>> matrix(5, vector<int>(5));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                ans = abs(j - 2) + abs(i - 2);
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
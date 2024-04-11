#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ai, bi;
    int cap = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ai >> bi;
        curr = curr - ai + bi;
        cap = max(curr, cap);
    }
    cout << cap << endl;
    return 0;
}
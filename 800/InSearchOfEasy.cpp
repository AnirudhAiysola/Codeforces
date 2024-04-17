#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
    return 0;
}
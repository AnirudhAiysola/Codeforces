#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    cin >> p;
    int count = 0;
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
            count = 1;
        break;
    }
    if (count)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
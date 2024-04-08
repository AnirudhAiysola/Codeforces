#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int r = 0, g = 0, b = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'R')
        {
            r++;
        }
        else if (s[i] == 'G' && s[i + 1] == 'G')
        {
            g++;
        }
        else if (s[i] == 'B' && s[i + 1] == 'B')
        {
            b++;
        }
    }
    cout << r + b + g << endl;
    return 0;
}
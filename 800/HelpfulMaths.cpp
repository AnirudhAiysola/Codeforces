#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string result = "";
    int c1 = 0, c2 = 0, c3 = 0;
    for (auto it : s)
    {
        if (it == '1')
        {
            c1++;
        }
        else if (it == '2')
        {
            c2++;
        }
        else if (it == '3')
        {
            c3++;
        }
    }
    while (c1--)
    {
        result += '1';
        result += '+';
    }
    while (c2--)
    {
        result += '2';
        result += '+';
    }
    while (c3--)
    {
        result += '3';
        result += '+';
    }
    result.pop_back();
    cout << result << endl;
    return 0;
}
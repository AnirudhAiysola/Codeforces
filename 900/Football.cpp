#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    bool flag = false;
    for (int i = 0; i < str.size() - 1; i++)
    {
        int count = 1;
        while (i < str.size() - 1 && str[i] == str[i + 1])
        {
            i++;
            count++;
        }
        if (count >= 7)
        {
            flag = true;
            break;
        }
        count = 1;
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
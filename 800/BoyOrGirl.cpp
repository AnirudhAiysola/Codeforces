#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;
    unordered_map<char, int> m;
    for (auto it : name)
    {
        m[it]++;
    }
    if (m.size() % 2 == 1)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}
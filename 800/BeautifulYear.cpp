#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = false;
    int ans = 0;
    n++;
    while (true)
    {
        int temp = n;
        string s = to_string(temp);
        unordered_set<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (st.count(s[i]))
            {
                break;
            }
            if (i == s.size() - 1)
            {
                flag = true;
            }
            st.insert(s[i]);
        }
        if (flag)
        {
            ans = n;
            break;
        }
        n++;
    }
    cout << ans << endl;
    return 0;
}
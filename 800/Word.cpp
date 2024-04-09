#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int lowerCount = 0;
    int upperCount = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            lowerCount++;
        }
        else
        {
            upperCount++;
        }
    }
    string result = s;
    if (lowerCount < upperCount)
    {
        transform(result.begin(), result.end(), result.begin(), ::toupper);
    }
    else
    {
        transform(result.begin(), result.end(), result.begin(), ::tolower);
    }
    cout << result << endl;
    return 0;
}
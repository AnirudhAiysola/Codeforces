#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num1 = n, num2 = n;
    int l1 = num1 % 10;
    int l2 = num2 % 10;
    num1 = num1 / 10;
    num2 = num2 / 10;
    num2 = num2 / 10;
    num2 = num2 * 10 - l2;
    if (n > 0)
    {
        cout << n << endl;
    }
    else if (num1 > num2)
    {
        cout << num1 << endl;
    }
    else
    {
        cout << num2 << endl;
    }
    return 0;
}
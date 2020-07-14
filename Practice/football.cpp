#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    int count = 1, flag = 0;
    for (int i = 1; i < s.length(); ++i)
    {
        /* code */
        if (s[i] == s[i-1])
        {
            count++;
            if (count >= 7) flag = 1;
        }
        else
            count = 1;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

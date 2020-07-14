#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; ++i)
    {
        /* code */
        //getline(cin, str[i]);
        cin >> str[i];
        if (str[i].length() > 10)
        {
            /* code */
            int len = str[i].length();
            string s=str[i];
            string s1 = s[0] + to_string(len - 2) + s[len - 1];
            cout << s1 << "\n";
        }
        else
            cout << str[i] << "\n";
    }
    return 0;
}

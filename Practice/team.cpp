#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, count = 0, a, b, c;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        /* code */
        cin >> a >> b >> c;
        if (a+b+c >= 2)
            count++;
    }
    cout << count;
    return 0;
}

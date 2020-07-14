#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;

    int score[n];
    for (int i = 0; i < n; ++i)
    {
        /* code */
        cin >> score[i];
    }
    int s=score[k-1], count = 0;
    for (int i = 0; i < n; ++i)
    {
        /* code */
        if (score[i] >= s && score[i])
            count++;
    }
    cout << count;
    return 0;
}

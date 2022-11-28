#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    string S, T;
    cin >> n;
    cin >> S >> T;
    int ans = 0;
    for (i = 0; i < n; i++)
    {
        if (S[i] != T[i])
        {
            ans++;
            while (i + 1 < n && S[i + 1] != T[i + 1])
                i++;
        }
    }

    cout << ans << endl;
    return 0;
}
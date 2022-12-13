//0

#include <iostream>
#include <cstring>
using namespace std;

const int N = 1e4;

int f[N][N];

int main()
{
    string x, y;
    while (cin >> x >> y)
    {
        f[0][0] = (x[0] == y[0]);
        int n = x.size(), m = y.size();
        for (int i = 1; i < n; i++)
            f[i][0] = (x[i] == y[0]);

        for (int j = 1; j < m; j++)
            f[0][j] = (x[0] == y[j]);

        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
            {
                f[i][j] = max(f[i][j - 1], f[i - 1][j]);

                if (x[i] == y[j])
                    f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
            }
        cout << f[n - 1][m - 1] << endl;
    }
    return 0;
}
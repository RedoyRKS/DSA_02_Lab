
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define memo(a, b) memset(a, b, sizeof(a))
#define INF 1e9
#define EPS 1e-8
#define PI 3.14159265358979323846

typedef long long ll;
typedef unsigned long long ull;

int N, W, X, Y;
double P1, P2, f[1000 + 10][10000 + 10];
int visit[1000 + 10][10000 + 10], cas;
double ans;

double solve(int pos, int value);
int main()
{
    int T;
    cin >> T;
    for (cas = 1; cas <= T; cas++)
    {
        cin >> X >> Y >> N >> W >> P1 >> P2;

        P1 /= 100.0;
        P2 /= 100.0;

        cout << setprecision(6) << fixed << solve(N, 0) * 100.0 << endl;
    }
    return 0;
}

double solve(int pos, int value)
{
    if (value >= W)
        return 1.0;
    if (pos == 0)
        return 0.0;

    double &ret = f[pos][value];
    int &vis = visit[pos][value];

    if (vis == cas)
        return ret;
    ret = 0.0;
    vis = cas;

    double x = P1 * solve(pos - 1, value + X) + (1 - P1) * solve(pos - 1, value);
    double y = P2 * solve(pos - 1, value + Y) + (1 - P2) * solve(pos - 1, value);

    return ret = max(x, y);
}

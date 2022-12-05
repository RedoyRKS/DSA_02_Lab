
#include <bits/stdc++.h>
using namespace std;

int assinH(int Mouse[], int People[],
               int n, int m)
{

    if (n != m)
        return -1;

    sort(Mouse, Mouse + n);
    sort(People, People + m);

    int max = 0;
    for (int i = 0; i < n; ++i)
    {
        if (max < abs(Mouse[i] - People[i]))
            max = abs(Mouse[i] - People[i]);
    }
    return max;
}

int main()
{

    int Mouse[] = {4, -4, 2};

    int People[] = {4, 0, 5};

    int n = sizeof(Mouse) / sizeof(Mouse[0]);

    int m = sizeof(People) / sizeof(People[0]);

    int minTime = assinH(Mouse, People, n, m);

    cout << "Ans:"
         << minTime << endl;

    return 0;
}

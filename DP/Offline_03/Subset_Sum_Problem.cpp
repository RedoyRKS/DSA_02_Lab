// 011201355
#include <iostream>
using namespace std;

bool isSubsetSum(int set[], int n, int sum)
{

    bool subs[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
        subs[i][0] = true;

    for (int i = 1; i <= sum; i++)
        subs[0][i] = false;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (j < set[i - 1])
                subs[i][j] = subs[i - 1][j];
            if (j >= set[i - 1])
                subs[i][j] = subs[i - 1][j] || subs[i - 1][j - set[i - 1]];
        }
    }

    return subs[n][sum];
}

// Driver code
int main()
{
    int set[] = {3, 34, 4, 12, 5, 2};
    int sum ;
    cout << "Input Sum :";
    cin >> sum;
    int n = sizeof(set) / sizeof(set[0]);
    if (isSubsetSum(set, n, sum) == true)
        cout << "True";
    else
        cout << "False";
    return 0;
}

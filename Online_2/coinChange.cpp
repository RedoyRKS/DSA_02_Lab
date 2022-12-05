
#include <bits/stdc++.h>
using namespace std;

int x[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
int n = sizeof(x) / sizeof(x[0]);

void findMin(int a)
{
    sort(x, x + n);

    vector<int> ans;

    for (int i = n - 1; i >= 0; i--)
    {

        while (a >= x[i])
        {
            a -= x[i];
            ans.push_back(x[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    cout << "Change: ";

    findMin(n);
    return 0;
}

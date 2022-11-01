#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    /* initialization */
    vector<int> list4;
    int x;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        list4.push_back(x);
    }
    /* size of vector */
    printf("size: %lu\n", list4.size());
    /* iterate over vector - way 1 */
    for (int i = 0; i < list4.size(); i++)
        printf("[%d] %d\n", i, list4[i]);
    /* delete from index i */
    int i = 2;
    list4.erase(list4.begin() + i);
    /* iterate over vector - way 2 */
    for (int x : list4)
        printf("%d\n", x);
}
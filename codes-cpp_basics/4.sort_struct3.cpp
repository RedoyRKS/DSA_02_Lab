#include <bits/stdc++.h>
using namespace std;
struct Pair {
    int start, end;
};
  
bool comparePair(Pair i1, Pair i2)
{
    return (i1.start < i2.start);
}
  
int main()
{
    vector<Pair> v { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
  
    sort(v.begin(), v.end(), comparePair);
    
    for (auto x : v)
        cout << "[" << x.start << ", " << x.end << "] ";
  
    return 0;
}
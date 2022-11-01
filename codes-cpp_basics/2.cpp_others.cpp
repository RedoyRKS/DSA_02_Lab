#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a=5, b = 10;
    cout << max(a, b) << endl;
    cout << min(a, b) << endl;

    swap(a, b);
    cout << a << " " << b << endl;
}
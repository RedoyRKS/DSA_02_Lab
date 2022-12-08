#include<bits/stdc++.h>

using namespace std;

void func1(){
    for (int i = 0; i < 5000000; i++)
    {
        cout<<".";
    }
    
}

int main()
{
    clock_t t = clock();
    func1();
    t = clock() - t;
    double time = ((double)t)/CLOCKS_PER_SEC;
    cout<<time<<" seconds"<<endl;

}
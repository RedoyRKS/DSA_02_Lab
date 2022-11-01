#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    bool b1 = true;
    bool b2 = false;
    if (b1)
    {
        printf("inside first if\n");
        if (b2)
        {
            printf("inside first nested if\n");
        }
    }
    printf("end\n");
    return 0;
}

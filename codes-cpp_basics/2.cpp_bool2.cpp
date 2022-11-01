#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    bool b1 = true;
    bool b2 = false;
    bool b3 = 0;
    bool b4 = 1;
    if (b1)
    {
        printf("inside first if\n");
        if (b2)
        {
            printf("inside first nested if\n");
        }
        if (b3)
        {
            printf("inside second nested if\n");
        }
        if (b4)
        {
            printf("inside third nested if\n");
        }
    }
    printf("end\n");
    return 0;
}

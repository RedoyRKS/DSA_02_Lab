#include <iostream>
using namespace std;

int main()
{
    char str[100];
    /* input single word */
    cin >> str;
    cout << str;
    /* discards the input buffer */
    cin.sync();
    /* input a line */
    // cin.get(str, 100);
    // cout << str;

    gets(str);
    cout << str;
    return 0;
}
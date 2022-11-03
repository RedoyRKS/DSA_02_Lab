#include <stdio.h>

int main()
{
    char str[100];
    /* input single word */
    scanf("%s", str);
    printf("%s\n", str);
    /* discards the input buffer */
    fflush(stdin);
    /* input a line */
    fgets(str, 100, stdin);
    printf("%s\n", str);
    return 0;
}

#include <stdio.h>

/* count lines in input */
int main()
{
    int c, nl;

    nl = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n') {
            printf("%d = %d\n", c, '\n');
            ++nl;
        }

    printf("%d\n", nl);
}

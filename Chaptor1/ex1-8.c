#include <stdio.h>

/* count lines in input */
int main()
{
    int c, nl, b, t;

    nl = 0;
    b = 0;
    t = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') 
            ++nl;

        if (c == '\t')
            ++t;

        if (c == ' ')
            ++b;
    }

    printf("Number of lines: %d\n", nl);
    printf("Number of tabs: %d\n", t);
    printf("Number of blanks: %d\n", b);
}

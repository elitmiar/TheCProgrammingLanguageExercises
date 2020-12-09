#include <stdio.h>

/* count lines in input */
int main()
{
    int c;
    int p;

    p = EOF;

    while ((c = getchar()) != EOF) {
       if (c == ' ') {
           if (p == ' ') {
            c = 0;
           }
           p = getchar();
       }

        putchar(c);
    }
}

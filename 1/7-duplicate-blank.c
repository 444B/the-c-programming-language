/*Exercise 1-7. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.*/
#include <stdio.h>

int main()
{
    int c, lastc;
    lastc = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (lastc != ' ')
            {
                putchar(c);
            }
        }
        else
        {
            putchar(c);
        }
        lastc = c;
    }
    return 0;
}
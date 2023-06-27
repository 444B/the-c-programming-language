/*Exercise 1-6. Write a program to count blanks, tabs, and newlines.*/

#include <stdio.h>

main() /* count lines in input */
{
    int c, blank, tab, newline;

    blank = tab = newline = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++blank;
        if (c == '\t')
            ++tab;
        if (c == '\n')
            ++newline;
    }
    
    /*printf("\nBlanks | Tabs | Newlines\n");
    printf("  %d        %d       %d\n", blank, tab, newline);*/
    
    printf("\nBlanks: %d\nTabs: %d\nNewlines: %d\n", blank, tab, newline);
}
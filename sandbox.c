#include <stdio.h>

int n;

n = 0;

test()
{

    printf("Goodbye, world! %d\n", n);
    ++n;
}

main()
{
    while (n<=10)
    {
        test();
    }
}
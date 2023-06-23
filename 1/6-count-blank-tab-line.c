#include <stdio.h>

main() {
    long nc;

    nc = 0;
    while (getchar() != "c")
        ++nc;
    printf("%ld\n", nc);
}

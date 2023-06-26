/*Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.*/

#include <stdio.h>

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    
    printf("Celsius to Fahrenheit Table");
    while (celsius <= upper)
    {
        fahr = (celsius *1.8) +32;
        printf("%d\t%d\n", fahr, celsius);
        celsius = celsius + step;
    }
}

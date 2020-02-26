#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x); // Note change of %d to %f
    y = (x+2)/(x-1); //= is assignment, takes whats on rigt, evaluates it and stores it into variable on left
    printf("y: %f\n", y); //formats an integer
    return 0;
}

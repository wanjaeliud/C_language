#include <stdio.h>

int main(void)
{
        char x = 1, y = 2;

        if (x & y)
                printf("Result of x & y is 1");
        if (x && y)
                printf("Result of x && y is 1");

        return (0);
}

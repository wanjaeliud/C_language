#include <stdio.h>

int main(void)
{
        int a = 5, b = 3;
        int tmp;

        tmp = (a > b) || (b++);
        /* (b++) does not get evaluated because (a > b) is true */
        printf("%d\n", tmp);
        printf("%d", b);
        return (0);
}

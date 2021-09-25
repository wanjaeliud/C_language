#include <stdio.h>

int main(void)
{
        int a = 5, b = 3;
        int tmp;

        tmp = (a < b) && (b++);
        /**
        * tmp = (a > b) && (b++)
        * the two expressions gets evaluated
        **/

        printf("%d\n", tmp);
        printf("%d", b);
        return (0);
}

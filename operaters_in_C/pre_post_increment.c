#include <stdio.h>

int main(void)
{
        int a = 4, b = 3;
        printf("%d", a+++++b);
        /**
        * error after token generation the equation looks like this
        * a++ ++ + b where ++ has no lvalue
        **/
        /* printf("%d", a++ + ++b); */
        return (0);
}

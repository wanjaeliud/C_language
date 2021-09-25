/**
* creating a global variable
**/

#include <stdint.h>

int fun();

/** global variable **/
int var = 10;

int main(void)
{
        int var = 3;
        printf("%d\n", var);
        fun();
        return (0);
}

int fun()
{
        printf("%d", var);
}

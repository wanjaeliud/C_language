#include <stdio.h>

int main(void)
{
    /* initializing var and then changing the value of var */
    int var = 5;
    /**
    * you do not re-define int var again, the variable is already
    * allocated its memory space
    */
    var = 8;
    printf("%d\n", var);

    /*  */
    int var1 = 4;
    int var2;
    var2 = var1;
    printf("%d\n", var2);

    /* same values to different variables*/
    int var3, var4, var5;
    var3 = var4 = var5 = 6;
    printf("%d\n", var3);
    printf("%d\n", var4);
    printf("%d", var5);

    return (0);
}

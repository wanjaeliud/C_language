#include <stdio.h>

int main(void)
{
        int a = 4, b = 3;

        a = a ^ b;    /* a=4^3; New value of a is 7 */

        b = a ^ b;    /* b=7^b; New value of b is 4 */

        //a = a ^ b;    /* a=7^4; Newest value of a is 3 */

        printf("After XOR, a = %d and b = %d", a, b);
        return (0);
}

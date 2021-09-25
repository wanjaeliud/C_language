#include <stdio.h>

int main(void)
{
        int a = 1;
        int b = 1;
        int c = ++a || b++;
        int d = b-- && --a;
        printf("%d %d %d %d", d, c, b, a);
        return (0);
}

//int main(void)
//{
//    int *ptr;
//
//    *ptr = 98;
//    printf("%d\n", *ptr);
//    return (0);
//}

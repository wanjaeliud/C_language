//#include <stdio.h>
//
//int main(void)
//{
//        int i = 5;
//        int var = sizeof(i++); /* i++ is not evaluated  so no increment */
//        printf("%d %d", i, var);
//        return (0);
//}

#include <stdio.h>
int main()
{
        unsigned int var = 10;
        printf("%d", ~var);
        return 0;
}



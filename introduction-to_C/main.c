
#include <stdio.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
      for (j = 1; j <= i; j++) {
         printf("%d ", j);
      }
//      while (k != 2 * i - 1)
//      {
//          printf("%d ", j);
//          k++;
//      }
      printf("\n");
   }
   return 0;
}







//// Hello world! Cplayground is an online sandbox that makes it easy to try out
//// code.
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
///* more headers goes there */
//
///* betty style doc for function main goes there */
///*
//int main(void)
//{
//    int x, y, z;
//
//    for (x = 0; x <= 9; x++)
//    {
//
//        for (y = x + 1; y <= 9; y++)
//        {
//
//            for (z = y + 1; z <= 9; z++)
//            {
//                putchar('0' + x);
//                putchar('0' + y);
//                putchar('0' + z);
//
//                if (x != 7 || y != 8 || z != 9)
//                {
//                    putchar(',');
//                    putchar(' ');
//                }
//            }
//
//
//
//
//        }
//    }
//}
//
//
//int main(void)
//{
//    int x, y, z;
//
//    for (x = 0; x <= 9; x++)  // 0 to 9
//    {
//
//        for (y = x + 1; y <= 9; y++)  // x + 1  to 9
//        {
//
//            putchar('0' + x);
//            putchar('0' + y);
//
//            if (x != 8 || 9 != 9)
//            {
//                putchar(',');
//                putchar(' ');
//            }
//
//        }
//    }
//}
//*/
//

#include <stdio.h>
int main(void)
{
        int c = 65;
        putchar(c);
        return (0);
}



void main(void)
{
    int n;
    int i;
    int x = 14;
    int p;

    if (x > 15 || x < 0)
        return;


    for (n = 0; n <= x ; n++)

    {
        for (i = 0; i <= x; i++)
        {
            p = n*i;
            if (i == 0)
            {
                printf("%d",p);
            }
            else if (p > 9 && p < 100)
            {
                printf(",  %d", p);

            }
            else if (p > 99)
            {

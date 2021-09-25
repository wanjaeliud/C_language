/**
#include <stdio.h>
int main()
{
        int n;

        printf("enter value: ");
        scanf("%d", &n);
        if (n < 98)
        {
                while (n <= 98)
                {
                        printf("%d, ", n);
                        n++;
                }
        }
        else if (n > 98)
        {
                while (n >= 98)
                {
                        printf("%d, ", n);
                        n--;
                }
        }
}


/*
int main()
{
        int i;

i = 10;
while (i < 20)
{
    printf("%d", i % 2);
    i++;
}
}
*/
/**
#include <stdio.h>

int main(int n)
{
    printf("Enter the value:");
    scanf("%d", &n);
    if (n <98)
    {

        for (n = n; n < 98; n++)
            printf("%d, ", n);
        printf("%d\n", 98);
    }
    else
    {
        for (n = n; n > 98; n--)
            printf("%d, ", n);
        printf("%d\n", 98);
    }
}
**/

#include <stdio.h>
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int main(void)
{
    int i;
    i = _islower('a');
    printf("%d", i);
    return 0;
}

/**
* What's the output of the following C program
**/

#include <stdio.h>

int main(void)
{
        printf("%s\n", "Hello!");
        printf("%11s", "Hello");

        return (0);
}

/**
* because of shortage of characters it prints 6 whitespaces and after that    the rest
* of the 5 characters
**/

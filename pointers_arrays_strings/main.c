#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("1 %s\n", s1);//first output
    printf("2 %s", s2);//secondn output
    ptr = _strcat(s1, s2);
    printf("3 %s", s1);// third
    printf("4 %s", s2);// forth
    printf("5 %s", ptr);// fifth    
    return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    n = read_textfile("file.txt", 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile("file.txt", 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}

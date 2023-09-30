#include "main.h"

/**
 * print_binary - A function that prints a binary number without % or /
 * @n: The number to be printed
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1UL << 63;  // Initialize a mask to the leftmost bit

    if (n == 0)
    {
        putchar('0');  // If n is 0, print '0' and return
        return;
    }

    while (mask > 0)
    {
        if (n & mask)  // Check if the current bit is set
            putchar('1');
        else
            putchar('0');

        mask >>= 1;  // Shift the mask to the right
    }
}

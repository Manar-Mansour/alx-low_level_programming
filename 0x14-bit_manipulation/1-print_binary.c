#include "main.h"

/**
 * print_binary - A function that prints a binary number without % or /
 * @n: The number to be printed
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1UL << 63; 

    if (n == 0)
    {
        _putchar('0'); 
        return;
    }

    while (mask > 0)
    {
        if (n & mask)  
            _putchar('1');
        else
            _putchar('0');

        mask >>= 1;  
    }
}

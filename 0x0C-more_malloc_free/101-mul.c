#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_valid_number - Check if a string is a valid number
 * @str: The input string
 * Return: 1 if valid, 0 if not
 */
int is_valid_number(const char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
            return 0; 
        str++;
    }
    return 1; // All characters are digits, so it's a valid number
}

/**
 * main - Multiply two positive numbers
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: Exit status
 */
int main(int argc, char **argv)
{
    int num1, num2, result;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }
    else if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
    {
        printf("Error\n");
        return (98);
    }
    else
    {
        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);
        result = num1 * num2;
        printf("%d\n", result);
        return (0);
    }
}

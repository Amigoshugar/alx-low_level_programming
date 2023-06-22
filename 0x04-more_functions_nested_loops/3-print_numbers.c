#include "main.h"

void print_numbers(void)
{
    int i;
    char num;

    for (i = 0; i < 10; i++)
    {
        num = i + '0';  // Convert the number to its corresponding character
        _putchar(num);
    }
    _putchar('\n');
}

#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a character to the screen
 *
 * @x: the character to be printed to screen
 * Return: 1 always
 */
int _putchar(char x)
{
        return write(1, &x, 1);
}

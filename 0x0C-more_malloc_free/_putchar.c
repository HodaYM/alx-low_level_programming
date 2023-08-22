#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 * Return: On Sucess 1
 * On error, -1 os returned, and error is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
<<<<<<< HEAD
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

=======
 * Return On success 1.
 * On error, -1 is returned, and the error is set appropriately.
 */
>>>>>>> 0df21d2c6fddd523342a86668a25d53d716291c9
int _putchar(char c)
{
	return (write(1, &c, 1));
}

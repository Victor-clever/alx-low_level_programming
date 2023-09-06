<<<<<<< HEAD
#include <unistd.h> 
 
/** 
 * _putchar - writes the character c to stdout 
 * @c: The character to print 
 * 
 * Return: On success 1. 
 * On error, -1 is returned, and errno is set appropriately. 
 */ 
int _putchar(char c) 
{ 
 return (write(1, &c, 1)); 
} 
=======
include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
>>>>>>> b8340f6f93f7a401ee590028fe550645a664d55d


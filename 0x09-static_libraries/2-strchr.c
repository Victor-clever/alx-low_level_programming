#include "main.h"
<<<<<<< HEAD
=======
#include <stddef.h>

>>>>>>> b8340f6f93f7a401ee590028fe550645a664d55d
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

<<<<<<< HEAD

=======
>>>>>>> b8340f6f93f7a401ee590028fe550645a664d55d
	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}


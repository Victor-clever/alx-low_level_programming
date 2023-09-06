#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

<<<<<<< HEAD

=======
>>>>>>> b8340f6f93f7a401ee590028fe550645a664d55d
	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

<<<<<<< HEAD

=======
>>>>>>> b8340f6f93f7a401ee590028fe550645a664d55d
return ('\0');
}


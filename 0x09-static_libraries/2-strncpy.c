#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

<<<<<<< HEAD

=======
>>>>>>> b8340f6f93f7a401ee590028fe550645a664d55d
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

<<<<<<< HEAD

=======
>>>>>>> b8340f6f93f7a401ee590028fe550645a664d55d
	return (dest);
}


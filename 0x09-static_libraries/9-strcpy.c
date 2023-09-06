#include "main.h"
<<<<<<< HEAD
		
=======

>>>>>>> b8340f6f93f7a401ee590028fe550645a664d55d
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

<<<<<<< HEAD

=======
>>>>>>> b8340f6f93f7a401ee590028fe550645a664d55d
	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}


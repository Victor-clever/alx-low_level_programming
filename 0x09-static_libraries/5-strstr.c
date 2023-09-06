#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

<<<<<<< HEAD

=======
>>>>>>> b8340f6f93f7a401ee590028fe550645a664d55d
		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

<<<<<<< HEAD

=======
>>>>>>> b8340f6f93f7a401ee590028fe550645a664d55d
		if (*p == '\0')
			return (haystack);
	}

<<<<<<< HEAD

=======
>>>>>>> b8340f6f93f7a401ee590028fe550645a664d55d
	return (0);
}


#include "main.h"
<<<<<<< HEAD
=======

>>>>>>> b8340f6f93f7a401ee590028fe550645a664d55d
/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */
<<<<<<< HEAD
int _atoi(char *s)
{
 	int sign = 1, i = 0;
 	unsigned int res = 0;


 	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
 	{
 		if (s[i] == '-')
 			sign *= -1;
 		i++;
 	}
 	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
 	{
 		res = (res * 10) + (s[i] - '0');
 		i++;
 	}
 	res *= sign;
 	return (res);
 }
=======

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
>>>>>>> b8340f6f93f7a401ee590028fe550645a664d55d


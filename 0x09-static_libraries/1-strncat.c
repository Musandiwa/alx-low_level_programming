#include "main.h"

/**
<<<<<<< HEAD
 * _strncat - concatenate two strings
=======
 * _strncat - concatenate two strings 
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int i;
        int j;

<<<<<<< HEAD
        i = 0;
        while (dest[i] != '\0')
        {
                i++;
        }
        j = 0;
        while (j < n && src[j] != '\0')
        {
        dest[i] = src[j];
        i++;
        j++;
        }
        dest[i] = '\0';
        return (dest);
=======
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
}


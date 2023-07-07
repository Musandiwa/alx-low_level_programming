#include "main.h"

/**
<<<<<<< HEAD
 * _strcat - concatenates two strings
=======
 * _strcat - concatenates two strings 
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
<<<<<<< HEAD
        int i;
        int j;

        i = 0;
        while (dest[i] != '\0')
        {
                i++;
        }
        j = 0;
        while (src[j] != '\0')
        {
                dest[i] = src[j];
                i++;
                j++;
        }

        dest[i] = '\0';
        return (dest);
}

=======
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3

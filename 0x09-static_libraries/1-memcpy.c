#include "main.h"

/**
<<<<<<< HEAD
 * _memcpy - a function that copies memory area
=======
 * _memcpy - a function that copies memory area 
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * @c: char to check
 *
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
<<<<<<< HEAD
        int r = 0;
        int i = n;

        for (; r < i; r++)
        {
                dest[r] = src[r];
                n--;
        }
        return (dest);
}

=======
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3

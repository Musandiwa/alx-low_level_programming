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

        j = 0;
        while (j < n && src[j] != '\0')
        {
                dest[j] = src[j]:
<<<<<<< HEAD
                j++;
        }
        while (j < n)
        {
                dest[j] = '\0';
                j++;
=======
		j++;
        }
        while (j < n)
        {
		dest[j] = '\0';
		j++;
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
        }

       return (dest);
}


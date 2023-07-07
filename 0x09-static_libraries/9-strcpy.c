#include "main.h"

/**
 * char* _strcpy - a function that copies the string pointed to by src
 * @dest: copy to
<<<<<<< HEAD
 * @src: copy from
=======
 * @src: copy from 
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
 * @n: input value
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
        int l = 0;
        int x = 0;

        while (*(src + l) != '\0')
        {
                l++;
        }
        for ( ; x < l ; x++)
        {
<<<<<<< HEAD
                dest[x] = src[x];
=======
		dest[x] = src[x];
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
        }
        dest[l] = '\0';
       return (dest);
}

<<<<<<< HEAD

=======
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3

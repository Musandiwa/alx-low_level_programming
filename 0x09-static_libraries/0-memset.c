#include "main.h"

/**
<<<<<<< HEAD
 * _memset - fill a block of memory with a specific value
=======
 * _memset - fill a block of memory with a specific value 
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
<<<<<<< HEAD
        int i = 0;

        for (; n > 0; i++)
        {
                s[i] = b;
                n--;
        }
        return (s);
=======
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
}


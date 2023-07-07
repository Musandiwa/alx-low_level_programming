#include "main.h"

/**
 * _strpbrk - Entry point
<<<<<<< HEAD
 * @s: input
 * @accept: input
=======
 * @s: input 
 * @accept: input 
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
<<<<<<< HEAD
        int k;

        while (*s)
        {
                for (k = 0; accept[k]; k++)
                {
                if (*s == accept[k])
                return (s);
                }
        s++;
        }
=======
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3

return ('\0');
}


#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
<<<<<<< HEAD
        unsigned int n = 0;
        int r;

        while (*s)
        {
                for (r = 0; accept[r]; r++)
                {
                        if (*s == accept[r])
                        {
                                n++;
                                break;
                        }
                        else if (accept[r + 1] == '\0')
                        return (n);
                }
                s++;
        }
        return (n);
=======
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
			return (n);
		}
		s++;
	}
	return (n);
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
}


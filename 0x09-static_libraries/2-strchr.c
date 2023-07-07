#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
<<<<<<< HEAD
 * @s: input
 * @c: input
=======
 * @s: input 
 * @c: input 
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
        int i = 0;

<<<<<<< HEAD
        for (; s[i] >= '\0'; j++)
        {
                if (s[i] == c)
                        return (&s[i]);
        }
        return (0);
=======
	for (; s[i] >= '\0'; j++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
}


#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
        int longi = 0;

<<<<<<< HEAD
        while (*s != '\0')
        {
                longi++;
                s++;
        }

=======
	while (*s != '\0')
	{
		longi++;
		s++;
	}
        
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
       return (longi);
}


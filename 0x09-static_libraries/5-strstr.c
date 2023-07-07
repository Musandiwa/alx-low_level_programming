#include "main.h"

/**
 * _strstr - Entry point
<<<<<<< HEAD
 * @haystack: input
 * @needle: input
=======
 * @haystack: input 
 * @needle: input 
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
<<<<<<< HEAD
        for (; *haystack != '\0'; haystack++)
        {
                char *l = haystack;
                char *p = needle;

                while (*l == *p && *p != '\0')
                {
                        l++;
                        p++;
                }

                if (*p == '\0')
                        return (haystack);
        }

        return (0);
=======
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
}


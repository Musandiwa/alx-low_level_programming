#include "main.h"

/**
 * _atoi - convert a string into an integer.
<<<<<<< HEAD
 *
=======
 * 
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
 * @s: the string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
        int sign = 1, i = 0;
        unsigned int res = 0;

        while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
        {
<<<<<<< HEAD
                if (s[i] == '-')
                        sign *= -1;
=======
		if (s[i] == '-')
			sign *= -1;
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
                i++;
        }
        while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
        {
<<<<<<< HEAD
                res = (res * 10) + (s[i] - '0');
                i++;
=======
		res = (res * 10) + (s[i] - '0');
		i++;
>>>>>>> d5d77b66103dadf1e072ef2daa6c2d795bfae4d3
        }
        res *= sign;
       return (res);
}


#include "head.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * search_string - function
 * Description: Searches a string in specific string
 * @str: Original string
 * @srch: string to search for
 * Return: a pointer to the string pointer
 */
char *search_string(char *str, char *srch)
{
	char *tmp_str = str;
	int i;

	if (*srch == 0)
		return (NULL);
	while (*str)
	{
		char tmp1, tmp2;

		i = 0;
		if (str[i] >='A' && str[i] <='Z')
			tmp1 = str[i] + 32;
		else
			tmp1 = str[i];
		if(srch[i] >= 'A' && srch[i] <='Z')
			tmp2 = srch[i] + 32;
		else
			tmp2 = srch[i];

		if (tmp1 == tmp2)
		{
			for (i = 0 ; tmp1 == tmp2 ; i++)
			{
				if (srch[i + 1] == '\0')
					return (tmp_str);
				if (str[i + 1 ] >='A' && str[i + 1] <='Z')
					tmp1 = str[i + 1] + 32;
				else
					tmp1 = str[i + 1];
				if (srch[i + 1] >= 'A' && srch[i + 1] <='Z')
					tmp2 = srch[i + 1] + 32;
				else
					tmp2 = srch[i + 1];
			}
		}
		str++;
	}
	return (NULL);
}

#include "main.h"
#include <stdlib.h>
/**
 * str_concat - A function that concatenates two strings.
 * @s1: Function parameter
 * @s2:Function parameter
 *
 * Return:Conatenated string
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i, cnt1 = 0, cnt2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	for (i = 0; s1[i] != '\0'; i++)
		cnt1++;

	for (i = 0; s2[i] != '\0'; i++)
		cnt2++;

	ptr = (char *) malloc(sizeof(char) * (cnt1 + cnt2) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= (cnt1 + cnt2); i++)
	{
		if (i < cnt1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - cnt1];
	}
	ptr[i] = '\0';

	return (ptr);
}

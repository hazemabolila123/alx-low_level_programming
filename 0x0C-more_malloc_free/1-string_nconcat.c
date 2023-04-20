#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: Function parameter
 * @s2:Function parameter
 * @n: Function parameter
 *
 * Return:Conatenated string
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, cnt1 = 0, cnt2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		cnt1++;

	for (i = 0; s2[i] != '\0'; i++)
		cnt2++;

	if (n >= cnt2)
		n = cnt2;

	ptr = malloc(sizeof(char) * (cnt1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= (cnt1 + n); i++)
	{
		if (i < cnt1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - cnt1];
	}
	ptr[i] = '\0';

	return (ptr);
}

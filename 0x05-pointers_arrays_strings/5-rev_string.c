#include "main.h"
/**
 * rev_string - A function that reverses a string.
 * @s : Function parameters
 *
 */
void rev_string(char *s)
{
	char tmp = s[0];
	int i, cnt = 0;

	for (i = 0; s[i] != '\0'; i++)
		cnt++;

	for (i = 0; i < cnt; i++)
	{
		cnt--;
		tmp = s[i];
		s[i] = s[cnt];
		s[cnt] = tmp;
	}
}

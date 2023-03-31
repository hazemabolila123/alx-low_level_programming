

#include "main.h"

/**
  * cap_string - Function
  * @str: parameter
  *
  * Return: Success
  */
char *cap_string(char *str)
{
	char *cpy = str;

	*cpy -= *cpy >= 97 && *cpy < 97 + 26 ? 32 : 0;
	cpy++;
	while (*cpy != '\0')
		if (*cpy == ' ' || *cpy == '\n' || *cpy == '\t' || *cpy == '.')
		{
			cpy++;
			if (*cpy >= 97 && *cpy < 97 + 26)
				*cpy -= 32;
		}
		else if (*cpy == ',' || *cpy == ';' || *cpy == '!' || *cpy == '?')
		{
			cpy++;
			if (*cpy >= 97 && *cpy < 97 + 26)
				*cpy -= 32;
		}
		else if (*cpy == '(' || *cpy == ')' || *cpy == '{' || *cpy == '}')
		{
			cpy++;
			if (*cpy >= 97 && *cpy < 97 + 26)
				*cpy -= 32;
		}
		else if (*cpy == '"')
		{
			cpy++;
			if (*cpy >= 97 && *cpy < 97 + 26)
				*cpy -= 32;
		}
		else
			cpy++;
	return (str);
}

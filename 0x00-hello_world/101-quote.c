#include <unistd.h>
/**
 * main - A function start executing here
 * Return: Success
 *
 */
int main(void)
{
	int i, cnt = 0;
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (i = 0; str[i] != '\0'; i++)
		cnt++;

	write(1, str, cnt);
	return (1);
}

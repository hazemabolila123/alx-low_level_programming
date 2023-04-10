#include <stdio.h>
/**
 * main - Program start executing from main function
 * @argc: Argument counter
 * @argv: Argument values
 * Return: Success
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

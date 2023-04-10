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
	(void) argv;
	printf("%d\n", (argc - 1));
	return (0);
}

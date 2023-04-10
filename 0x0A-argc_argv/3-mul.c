#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program start executing from main function
 * @argc: Argument counter
 * @argv: Argument values
 * Return: Success
 *
 */
int main(int argc, char *argv[])
{
	int mul = 1;
	int i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}

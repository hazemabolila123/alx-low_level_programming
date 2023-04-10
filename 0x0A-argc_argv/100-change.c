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
	if (argc == 2)
	{
		int i, mincents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i <= 4; i++)
		{
			if (money >= cents[i])
			{
				mincents += money / cents[i];
				money = money % cents[i];
				if (money == 0)
					break;
			}
		}
		printf("%d\n", mincents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

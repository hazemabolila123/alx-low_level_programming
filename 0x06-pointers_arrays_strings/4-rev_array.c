#include "main.h"
/**
 * reverse_array - Function
 * @a: parameter
 * @n:parameter
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int num = a[0];

	for (i = 0; i < n; i++)
	{
		n--;
		num = a[i];
		a[i] = a[n];
		a[n] = num;
	}
}

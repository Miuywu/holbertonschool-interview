#include <stdio.h>
#include <math.h>
#include "menger.h"
/**
 * help - Check for if fill
 * @r: row index
 * @c: column index
 * Return: 1 to fill, 0 no
*/
int help(int r, int c)
{
	for (; r && c; r /= 3, c /= 3)
		if (r % 3 == 1 && c % 3 == 1)
			return (1);
	return (0);
}
/**
 * menger - Menger sponger
 * @level: Level of Menger
 */
void menger(int level)
{
	int size, r, c;

	size = pow(3, level);

	for (r = 0; r < size; ++r)
	{
		for (c = 0; c < size; ++c)
			printf(help(r, c) ? " " : "#");
		printf("\n");
	}
}

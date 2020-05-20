#include <stdio.h>
#include "sandpiles.h"
/**
 * sandpiles_sum - adds sandpiles then shows progression toward stable sandpile
 * @grid1: first sandpile
 * @grid2: second sandpile
 * Return: void
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int a, b, unstable = 1, grid3[3][3];

	for (a = 0; a < 3; a++)
		for (b = 0; b < 3; b++)
			grid1[a][b] += grid2[a][b];
	while (unstable > 0)
	{
		unstable = 0;
		for (a = 0; a < 3; a++)
			for (b = 0; b < 3; b++)
				if (grid1[a][b] > 3)
				{
					unstable++;
					grid3[a][b] = 1;
				}
		if (unstable)
		{
			for (a = 0; a < 3; a++)
				for (b = 0; b < 3; b++)
				{
					printf("%i", grid1[a][b]);
					if (b == 2)
						printf("\n");
					else
						printf(" ");
				}
			for (a = 0; a < 3; a++)
				for (b = 0; b < 3; b++)
				{
				if (grid3[a][b] == 1)
				{
					grid1[a][b] -= 4;
					if (a > 0)
						grid1[a - 1][b] += 1;
					if (b > 0)
						grid1[a][b - 1] += 1;
					if (a < 2)
						grid1[a + 1][b] += 1;
					if (b < 2)
						grid1[a][b + 1] += 1;
				}
				}
			for (a = 0; a < 3; a++)
				for (b = 0; b < 3; b++)
					grid3[a][b] = 0;
		}
		else
			return;
		unstable = 0;
                for (a = 0; a < 3; a++)
                        for (b = 0; b < 3; b++)
                                if (grid1[a][b] > 3)
                                        unstable++;
                if (unstable)
			printf("=\n");
	}
}

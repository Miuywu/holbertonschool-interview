#include "slide_line.h"
/**
 * slide_line - function that slides and merges an array of integers
 * @line: array of integers
 * @size: element count in line
 * @direction: slide direction
 * Return: 1 upon success, or 0 upon failure
 */
int slide_line(int *line, size_t size, int direction)
{
	int s = (int)size, d = 1, a, b, c, z = 0, y = 0, w = 1;

	if (!line || (direction != SLIDE_LEFT && direction != SLIDE_RIGHT))
		return (0);
	if (direction == SLIDE_RIGHT)
	{	d = -1;
		z = s;
		y = s - 1;
		w = -1;
	}
	for (a = z; a != y; a += d)
	{
		if (!line[a])
		{	c = a;
			for (b = a + d; b != y + w; b += d)
				if (line[b])
				{
					line[c] = line[b];
					line[b] = 0;
					c += d;
				}
		}
		if (!line[a + d])
		{
			c = a + d;
			for (b = a + (2 * d); b != y + w; b += d)
				if (line[b])
				{
					line[c] = line[b];
					line[b] = 0;
					c += d;
				}
		}
		if (line[a] && line[a + d] && line[a] == line[a + d])
		{
			line[a] = line[a] * 2;
			line[a + d] = 0;
		}
	}
	return (1);
}

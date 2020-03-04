#include <stdlib.h>
/**
***alloc_grid - this function return a pointer.
*@width: this columns.
*@height: this arrow.
*Return: pointer.
*/
int **alloc_grid(int *width, int *height)
{
	int i = 0, j = 0, k = 0;
	int **ar;

	if (*width < 0 || *height < 0)
		return ('\0');

	ar = malloc((*height) * sizeof(int *));
	for (k = 0; k < *height; k++)
	{
		ar[k] = malloc(*width * sizeof(int));
	}
	for (i = 0; i < *height; i++)
	{
		for (j = 0; j < *width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}

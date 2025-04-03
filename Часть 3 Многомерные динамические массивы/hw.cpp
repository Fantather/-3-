#include "hw.h"

void init_arr(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
}
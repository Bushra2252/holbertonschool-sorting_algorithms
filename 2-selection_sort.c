#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 * @array: pointer to the first element of the array
 * @size:  number of elements in the array
 *
 * Description: After each swap of two elements, the array is printed.
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min_idx;
int tmp;

if (array == NULL || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
min_idx = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_idx])
min_idx = j;
}
if (min_idx != i)
{
tmp = array[i];
array[i] = array[min_idx];
array[min_idx] = tmp;
print_array(array, size);
}
}
}

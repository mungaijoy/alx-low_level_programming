#include "main.h"
/**
 * swap_int -> a funtion to swap two intergers
 * @a: parameter1
 * @b: parameter2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}

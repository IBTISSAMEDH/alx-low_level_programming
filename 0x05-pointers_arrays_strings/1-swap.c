#include "main.h"

/**
*swap_int - swap value
*@a:takes the value of b
*@b : takes the value of a
*return :0
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

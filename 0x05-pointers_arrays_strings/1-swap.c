/**
 * swap_int - Entry point
 * @a: pointer to work
 * @b: other pointer
 *
 * Description: Reset a variable to 98
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
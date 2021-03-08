/**
 * puts_half - Print the half of a string
 * @str: Set of characters
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);
	int s;

	if (len % 2 == 0)
		s = (len / 2);
	else
		s = ((len + 1) / 2);

	i = s;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

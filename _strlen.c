/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 * Return: length of the string
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlen - a helper function that help me get the length of str
 * @str: string
 * Return: Length of String
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

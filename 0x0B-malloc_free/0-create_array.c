#include <stdlib.h>

/**
 * make_char_array - creates an array of characters and initializes
 *                   each element with a specific character.
 *
 * @size_of_array: size of the array to be created
 * @char_to_use: character to use to initialize each element of the array
 *
 * Return: pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}

#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Getting length of a string
 * @string: Input string
 * Return: length
 */
int _strlen(char *string)
{
	int length;

	length = 0;
	while (string[length] != '\0')
		length++;

	return (length);
}

/**
 * *_strcpy - copying string
 * @dest: Pointer to save string
 * @src: Copied string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, x;

	length = 0;
	while (src[length] != '\0')
		length++;

	for (x = 0; x < length; x++)
		dest[x] = src[x];

	dest[x] = '\0';
	return (dest);
}

/**
 * new_dog - Creating a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	(*dog).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog);
		free((*dog).name);
		return (NULL);
	}

	_strcpy((*dog).name, name);
	_strcpy((*dog).owner, owner);
	(*dog).age = age;

	return (dog);
}

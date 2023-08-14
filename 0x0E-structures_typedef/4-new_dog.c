#include <stdlib.h>
#include "dog.h"

/**
 * _strien - returns the lenght of a string.
 * @s: string to be evaluated.
 * JA codes
 * Return: the lenght of the string.
 */
int _strien(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * *_strcpy - copies the string pointed to by src including the
 * terminating null bytes (\0) tocthe buffer pointed to by dest.
 * @dest: pointer to the buffer in which we copy the string.
 * @src: string to be copied.
 * *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int j, ln;

	ln = 0;

	while (src[ln] != '\0')
	{
		ln++;
	}
	for (j = 0; j < ln; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * *new_dog - a function that creates a new dog.
 * @name: name of the new dog.
 * @age: age of the new dog.
 * @owner: owner of tge new dog.
 * *
 * Return: pointer to the new dog (succcess), NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int ln1, ln2;

	ln1 = _strien(name);
	ln2 = _strien(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (ln1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ln2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

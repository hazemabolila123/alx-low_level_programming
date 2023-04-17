#include "dog.h"
#include <stdlib.h>
/**
 * _strlen- A function that returns length of string
 * @str: Function parameter
 * Return: Length of string
 *
 */
int _strlen(const char *str)
{
	int i, cnt = 0;

	for (i = 0; str[i] != '\0'; i++)
		cnt++;

	return (cnt);
}
/**
 * _strcpy - A function that copy a atring
 * @dest: Function parameter
 * @src: Function parameter
 * Return: Copied string
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog- A function that copies the parameters into struct variables.
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: Struct
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}

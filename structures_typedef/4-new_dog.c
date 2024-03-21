#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog struct, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *p;
    char *name_copy, *owner_copy;

    /* Allocate memory for the dog structure */
    p = malloc(sizeof(dog_t));
    if (p == NULL)
        return (NULL);

    /* Allocate memory and copy name */
    name_copy = malloc(strlen(name) + 1);
    if (name_copy == NULL)
    {
        free(p);
        return (NULL);
    }
    strncpy(name_copy, name, strlen(name) + 1);

    /* Allocate memory and copy owner */
    owner_copy = malloc(strlen(owner) + 1);
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(p);
        return (NULL);
    }
    strncpy(owner_copy, owner, strlen(owner) + 1);

    /* Assign copied strings to the dog struct */
    p->name = name_copy;
    p->age = age;
    p->owner = owner_copy;

    return (p);
}

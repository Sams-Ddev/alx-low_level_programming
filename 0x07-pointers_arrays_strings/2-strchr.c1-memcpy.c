#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer to the first occurrence of the character c,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
    unsigned int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == c)
            return (s + i);
        i++;
    }

    if (s[i] == c)
        return (s + i);

    return (NULL);
}


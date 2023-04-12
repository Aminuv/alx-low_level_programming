#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - returns a pointer.
 * @str: the original string.
 *
 * Return: NULL if str, else pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *Str;
int i, s;
s = 0;
i = 0;


if (str == NULL)
{
return (NULL);
}

for (; str[s] != '\0' ; s++)
Str = malloc(sizeof(*str) + 1);


if (Str == 0)

return (NULL);
else
{
for (; i < s; i++)
Str[i] = str[i];
}
return (Str);
}

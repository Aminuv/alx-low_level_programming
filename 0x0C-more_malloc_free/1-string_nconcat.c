#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * tring_nconcat - a function that concatenates two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: integer
 *
 * return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int len = n, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
len++;
str = malloc(sizeof(char) * (len + 1));

if (str == NULL)
return (NULL);
len = 0;

for (i = 0; s1[i]; i++)
str[len++] = s1[i];

for (i = 0; s2[i] && i < n; i++)
str[len++] = s2[i];

str[len] = '\0';

return (str);
}

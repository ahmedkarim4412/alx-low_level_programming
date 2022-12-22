#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
int len = 0, i;

while (dest[len])
	len++;
for (i = 0; src[i] != '\0'; i++)
{
	dest[len] = src[i];
	len += 1;
}
dest[len] = '\0';
return (dest);
}

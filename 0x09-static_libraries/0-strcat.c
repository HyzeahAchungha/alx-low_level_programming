
#include "main.h"
/**
*  _strcat - function that concatenates two strings
*  @dest: entered value
*  @src: entered value
*
*  Return: void
*/
char *_strcat(char *dest, char *src)
{
int c;
int e;
c = 0;
while (dest[c] != '\0')
{
c++;
}
e = 0;
while (src[e] != '\0')
{
dest[c] = src[e];
c++;
e++;
}
dest[c] = '\0';
return (dest);
}

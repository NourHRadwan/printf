#include "main.h"
/**
  * _strlen - return length of string in integer
  * @s: string passed to function
  * Return: int 
  */
int _strlen(char *s)
{
int a = 0;
while (*(s + a) != '\0')
a++;
return (a);
}

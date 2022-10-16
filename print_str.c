#include "main.h"
/**
  * print_s - takes string and return string
  * @list: string
  * Return: string
  */
char *print_str(va_list list)
{
char *str;
char *ptr;
int len;
str = va_list(list, char *);
if (str == NULL)
str = "(null)";

if (str[0] == '\0')
return (-1);

len = _strlen(str);

ptr = malloc(sizeof(char) * len + 1);
if (ptr == NULL)
return (NULL);

return (len);
}

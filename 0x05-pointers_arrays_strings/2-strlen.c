#include "main.h"
#include <string.h>
/**
 * strlen_int -> a function to return the length of a string 
 * @s: string pointer to be passed to this function
 */
int _strlen(char *s)
{
	int len = 0;
	while (*(s + len) != '\0')
		len++;
	
	return (len);
}

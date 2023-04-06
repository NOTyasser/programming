#include "main.h"

/**
 * _puts_recursion - print string with new line
 */

void _puts-recursion(char *s)
{ 
           
        if (*s == '\0')
	{
	         
	      _putchar('\n');
	      return;
	}
   	_putchar(*s);
	s++;
	_puts_recursion(s);
}	

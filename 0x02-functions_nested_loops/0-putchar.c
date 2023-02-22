#include <unistd.h>
#include "main.h"
/**
 * _putchar - Entry point
 * description: prints putchar
 * Return : On success, the number of bytes written is returned.  
 * On error, -1 is returned, and errno is set to indicate the cause of the error.
 */
int _putchar(char c)
{
	return (write(1, &c, -1));
}

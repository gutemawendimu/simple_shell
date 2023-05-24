#include "shell.h"

/**
 * get_path - returns the value of the PATH envt varble.
 *
 * Return: pointer to the val of $PATH.
 */
char *get_path(void)
{
	return (_getenv("PATH"));
}


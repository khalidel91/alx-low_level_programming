#include <stdio.h>

/**
 * khalid_constructor - function that prints a text before main
 *
 * Return: void
 */
void khalid_constructor(void) __attribute__((constructor));

void khalid_constructor(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

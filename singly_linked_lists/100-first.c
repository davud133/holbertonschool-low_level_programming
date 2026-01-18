#include <stdio.h>
/**
 * before_main - Prints a message before main() is executed
 *
 * This function demonstrates how to run code before the main function
 * in C using the GCC/Clang constructor attribute. It will execute
 * automatically before main() starts.
 *
 * Return: void
 */
void before_main(void) __attribute__((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

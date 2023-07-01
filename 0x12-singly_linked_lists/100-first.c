#include <stdio.h>

/**
 * firstFunction - add constructor attribute to firstFunction
 * so that it execute before main()
 */
void firstFunction(void) __attribute__ ((constructor));
/**
 * firstFunction - entry point
 */
void firstFunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


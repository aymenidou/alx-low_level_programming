/**
 * op_add - add operation
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: sum of @a and @b
*/

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - difference operation
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: difference of @a and @b
*/
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiple operation
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: product of @a and @b
*/
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides operation
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: results of the division @a and @b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - gets the reminder of the division between @a and @b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: the remainder
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

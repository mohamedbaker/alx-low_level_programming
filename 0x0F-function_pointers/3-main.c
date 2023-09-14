#include "3-calc.h"

/**
 * main - program for simple opreations
 * @argc: number of arg
 * @argv: array of args
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	int (*op_func)(int, int);
	int firstInt, secInt;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	firstInt = atoi(argv[1]);
	secInt = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (!secInt && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_func(firstInt, secInt));
	return (0);
}

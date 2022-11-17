#include "3-calc.h"

/**
  * main - Program that performs simple operations
  *
  * @argc: - number of arguments
  * @argv: - array of arguments
  *
  * Return: EXIT_SUCCESS if success or EXIT_FAILURE is unsuccessfull
  */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	int (*op_func)(int, int);
	char *opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opr = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((opr[0] == '/' || opr[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	op_func = get_op_func(opr);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	calc = op_func(num1, num2);
	printf("%d\n", calc);
	exit(EXIT_SUCCESS);
}

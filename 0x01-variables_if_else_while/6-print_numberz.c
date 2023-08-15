#include <stdio.h>

/**
* main - Contains code
* Description: print only 1 digit nums by using put char
* Return: 0 for (successfull)
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num / 10 == 0)
			putchar('0' +  num);
	}
	putchar('\n');
	return (0);
}

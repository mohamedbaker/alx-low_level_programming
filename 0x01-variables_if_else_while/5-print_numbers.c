#include <stdio.h>

/**
*main - Contains whole code
*Description: print only 1 digit nums
*Return: 0 for (successfull)
*/

int main(void)
{
	int num;

	for (num = 0 ; num <= 10; num++)
	{
		if (num / 10 == 0)
		{
		printf("%d", num);
		}
	}
		puts("\n");
		return (0);
}

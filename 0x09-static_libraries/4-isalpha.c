#include "main.h"

/**
*_isalpha - checks for alphabet
*Description: returns 1 for lowe and upper cases alphapets
*@c: alpha value
*Return: 1 for succssfull 0 for false
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && 122))
		return (1);
	else
		return (0);
}

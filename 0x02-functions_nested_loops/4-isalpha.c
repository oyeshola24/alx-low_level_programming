#include "main.h"

/**
* _isalpha - checks for  lowercase or uppercase through letters
* c: checks for lowercase or uppercase
* Return:  0/1
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

#include "main.h"

/**
* _isalpha - checks for alphabetical letters
*
* Return:  0/1
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

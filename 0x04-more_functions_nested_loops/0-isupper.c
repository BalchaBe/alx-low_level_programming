#include "main.h"

/**  Check if a letter is upper
  *  Return: 1 for upper letter or 0 for any else
  */
int _isupper(int b)
{
	if (b >= 65 && b <= 90)
	{
		return (1);
	}

	return (0);
}

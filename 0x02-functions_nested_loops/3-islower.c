#include "main.h"
/**
 *  * _islower - chek if a char is lowercase
 *   *@c: is thee char to be checked
* Return: 1 if char is lowerscase, othe
*rwise 0.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

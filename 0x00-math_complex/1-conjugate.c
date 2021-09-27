#include "holberton.h"
#include <stdio.h>

/**
 * conjugate - change the signe
 * Return: complex
 * @c: complejo
 */
complex conjugate(complex c)
{
c.im = (c.im * -1);
return (c);
}

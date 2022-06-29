#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * op_add - recieves arguments and returns result
 * @a: first argument
 * @b: second argument
 *
 * Return: result of function
 */

int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - recieves arguments and returns result
 * @a: first argument
 * @b: second argument
 *
 * Return: result of function
 */

int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - recieves arguments and returns result
 * @a: first argument
 * @b: second argument
 *
 * Return: result of function
 */

int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_add - recieves arguments and returns result
 * @a: first argument
 * @b: second argument
 *
 * Return: result of function
 */

int op_div(int a, int b)
{
    return (a / b);
}

/**
 * op_div - recieves arguments and returns result
 * @a: first argument
 * @b: second argument
 *
 * Return: result of function
 */

int op_mod(int a, int b)
{
    return (a % b);
}
#include <unistd.h>

/**
 * main - program that prints Holberton.
 * Return: int
 */

int _putchar(char c)

{

	return (write(1, &c, 1));

}

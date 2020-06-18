#include "palindrome.h"
/**
 * is_palindrome - checks if n is a palindrome
 * @n: given unsigned long int to be checked
 * Return: 1 if n is a palindrome, and 0 otherwise
 */
int is_palindrome(unsigned long n)
{
	unsigned long originalN = n, reversedN = 0, remainder;

	while (n != 0) {
		remainder = n % 10;
		reversedN = reversedN * 10 + remainder;
		n /= 10;
	}
	if (originalN == reversedN)
		return (1);
	return 0;
}

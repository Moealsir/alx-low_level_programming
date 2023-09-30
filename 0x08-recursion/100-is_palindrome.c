#include "main.h"

/**
 * is_palindrome - check if s string is equal left to right that right to left
 * @s: string
 * Return: 0 or 1 if s is palindrome world
 */

int is_palindrome(char *s)
{
	if (*s == '\0') {
		return 1;
	} else if (*s != s[strlen(s) - 1]) {
		return 0;
	} else {
		return is_palindrome(s + 1);
	}
}

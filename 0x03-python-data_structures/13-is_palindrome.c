#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome- checks if a number is a palindrome
 * Return: Either 1 if number is a palindrome or 0 if not
 */
int is_palindrome(listint_t **head);
{
	int remain, num, sum = 0;

	for (num = n; n 1= 0; n = n/10)
	{
		remain = n % 10;
		sum = sum * 10 + remain;
	}
	if (num == sum)
		return (1);
	else
		return (0);
}

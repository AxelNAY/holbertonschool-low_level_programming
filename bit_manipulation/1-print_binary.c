#include "main.h"

/**
 * print_milliard - print the first numbers
 * from 10 millions to almost 5 milliards.
 * @n: number.
 * Return: the restant number.
 */

unsigned long int print_milliard(unsigned long int n)
{
	unsigned long int test, dec;

	if (n > 999999999)
	{
		dec = n * 0.000000001;
		test = dec * 0.2;
		if (dec == (test * 2))
			_putchar('0');
		else
			_putchar('1');
		n = n - (dec * 1000000000);
	}
	if (n > 99999999)
	{
		dec = n * 0.00000001;
		test = dec * 0.2;
		if (dec == (test * 2))
			_putchar('0');
		else
			_putchar('1');
		n = n - (dec * 100000000);
	}
	dec = n * 0.0000001;
	test = dec * 0.2;
	if (dec == (test * 2))
		_putchar('0');
	else
		_putchar('1');
	n = n - (dec * 10000000);
	return (n);
}

/**
 * print_million - print the first numbers
 * from 10 milles to almost 10 millions.
 * @n: number.
 * Return: the restant number.
 */

unsigned long int print_million(unsigned long int n)
{
	unsigned long int test, dec;

	if (n > 999999)
	{
		dec = n * 0.000001;
		test = dec * 0.2;
		if (dec == (test * 2))
			_putchar('0');
		else
			_putchar('1');
		n = n - (dec * 1000000);
	}
	if (n > 99999)
	{
		dec = n * 0.00001;
		test = dec * 0.2;
		if (dec == (test * 2))
			_putchar('0');
		else
			_putchar('1');
		n = n - (dec * 100000);
	}
	dec = n * 0.0001;
	test = dec * 0.2;
	if (dec == (test * 2))
		_putchar('0');
	else
		_putchar('1');
	n = n - (dec * 10000);
	return (n);
}

/**
 * print_mil - print the first numbers
 * from 10 to almost 10 milles.
 * @n: number.
 * Return: the restant number.
 */

unsigned long int print_mil(unsigned long int n)
{
	unsigned long int test, dec;

	if (n > 999)
	{
		dec = n * 0.001;
		test = dec * 0.2;
		if (dec == (test * 2))
			_putchar('0');
		else
			_putchar('1');
		n = n - (dec * 1000);
	}
	if (n > 99)
	{
		dec = n * 0.01;
		test = dec * 0.2;
		if (dec == (test * 2))
			_putchar('0');
		else
			_putchar('1');
		n = n - (dec * 100);
	}
	dec = n * 0.1;
	test = dec * 0.2;
	if (dec == (test * 2))
		_putchar('0');
	else
		_putchar('1');
	n = n - (dec * 10);
	return (n);
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: number.
 */

void print_binary(unsigned long int n)
{
	unsigned long int pair;

	if (n > 9999999)
		n = print_milliard(n);
	if (n > 9999)
		n = print_million(n);
	if (n > 9)
		n = print_mil(n);

	pair = n;
	n = n * 0.2;
	if (pair == (n * 2))
		_putchar('0');
	else
		_putchar('1');
}

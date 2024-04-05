#include "main.h"

/**
 * print_f10 - print the first five decimals.
 * @n: number.
 * Return: result.
 */

unsigned long int print_f5(unsigned long int n)
{
	unsigned long int test, pair, dec;

	if (n > 999999999)
	{
		dec = n * 0.000000001;
		pair = dec;
		test = dec * 0.2;
		if (pair == (test * 2))
			_putchar('0');
		else
			_putchar('1');
		n = n - (dec * 1000000000);
	}
	if (n > 99999999)
	{
		dec = n * 0.00000001;
		pair = dec;
		test = dec * 0.2;
		if (pair == (test * 2))
			_putchar('0');
		else
			_putchar('1');
		n = n - (dec * 100000000);
	}
	if (n > 9999999)
	{
                dec = n * 0.000001;
                pair = dec;
                test = dec * 0.2;
                if (pair == (test * 2))
                        _putchar('0');
                else
                        _putchar('1');
	}
	if (n > 999999)
        {
                dec = n * 0.01;
                pair = dec;
                test = dec * 0.2;
                if (pair == (test * 2))
                        _putchar('0');
                else
                        _putchar('1');
        }

	dec = n * 0.1;
	pair = dec;
	test = dec * 0.2;
	if (pair == (test * 2))
		_putchar('0');
	else
		_putchar('1');
	n = n - (dec * 10);

	return (n);
}

/**
 * print_f5 - print the first five decimals.
 * @n: number.
 * Return: result.
 */

unsigned long int print_f5(unsigned long int n)
{
	unsigned long int test, pair, dec;

	if (n > 9999)
	{
		dec = n * 0.0001;
		pair = dec;
		test = dec * 0.2;
		if (pair == (test * 2))
			_putchar('0');
		else
			_putchar('1');
		n = n - (dec * 10000);
	}
	if (n > 999)
	{
		dec = n * 0.001;
		pair = dec;
		test = dec * 0.2;
		if (pair == (test * 2))
			_putchar('0');
		else
			_putchar('1');
		n = n - (dec * 1000);
	}
	if (n > 99)
	{
		dec = n * 0.01;
		pair = dec;
		test = dec * 0.2;
		if (pair == (test * 2))
			_putchar('0');
		else
			_putchar('1');
		n = n - (dec * 100);
	}

	dec = n * 0.1;
	pair = dec;
	test = dec * 0.2;
	if (pair == (test * 2))
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

	if (n > 99999)
		print_f10(n);
	else if (n > 9)
		n = print_f5(n);

	pair = n;
	n = n * 0.2;
	if (pair == (n * 2))
		_putchar('0');
	else
		_putchar('1');
}

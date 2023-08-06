#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - a program that adds positive numbers`
 * @str: array string
 * A program Written by Jude Augustine
 * Return: Always 0 (success)
 */
int check_num(char *str)
{
	/*Declaring varibles*/
	unsigned int  count;

	count = 0;
	while (count < strlen(str))
		/*counts string*/
	{
		if (!isdigit(str[count]))/*checks if str are digits*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc:counts  arguments
 * @argv: Arguments
 * **
 * Return: Always 0, (upon success)
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	    int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes theough the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi
				(argv[count]); /*ATOI ....converts string to int*/
			sum += str_to_int;
		}
		/*conditions if one of the number contains symbols that are not digits*/
	else
		{
			printf("Error\n");
	return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*Print sum*/
	return (0);
}

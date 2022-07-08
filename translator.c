#include "head.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Translates a string
 * @argv: Parameter input strings
 * @argc: number of parameters
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *en[3] = {"Tyre", "Mirror", "Body"};
	char *am[3] = {"ጎማ", "መስታወት", "አካል"};
	char *ptr;
	int i;

	if (argc != 2)
	{
		printf("Error: You need to input only one string, or use \" \" to include it together\nExample: trans \"Tyre of the rear\"\n");
		return (0);
	}

	for (i = 0 ; i < 3 ; i++)
	{
	ptr = search_string(en[i], argv[1]);
	if (ptr != NULL)
		printf("%s -->  %s\n", en[i], am[i]);
	}

	/**
	 * printf("English\n%s\n%s\n%s\n", en[0], en[1], en[2]);
	 * printf("Amharic\n%s\n%s\n%s\n", am[0], am[1], am[2]);
	 */
	return (0);
}

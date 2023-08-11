#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %ln byte(s)\n", sizeof(char));
	printf("Size of an int: %ln byte(s)\n", sizeof(int));
	printf("Size of a long int: %ln byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ln byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ln byte(s)\n", sizeof(float));
	return (0);
}

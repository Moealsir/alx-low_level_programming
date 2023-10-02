#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: count
 * @argv: value
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
        int j, mul = 1;

        if (argc > 3 || argc < 3)
        {
                printf("Error\n");
                return (1);
        }
        else
        {
                for (j = 1; j <= 2; j++)
                        mul = mul * atoi(argv[j]);
                printf("%d\n", mul);
                return (0);
        }
}

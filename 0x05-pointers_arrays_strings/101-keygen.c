#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[12];
    int i, sum, diff;

    srand(time(0));

    for (i = 0; i < 11; i++)
    {
        password[i] = rand() % (126 - 33 + 1) + 33;
    sum = 0;
    for (i = 0; i < 11; i++)
    {
        sum += password[i];
    }

    diff = 2772 - sum;
    password[11] = diff;

    for (i = 0; i < 12; i++)
    {
        if (password[i] < 33 || password[i] > 126)
        {
            password[i] += diff;
            break;
        }
    }

    printf("%s", password);

    return (0);
}


Write a C program that takes two inputs from the user: a base number and a power.
Use a function to compute base^power using a loop and return the result.


#include <stdio.h>

int power();
int a, b, c;

int main()
{
    printf("enter the num :");
    scanf("%d", &a);

    printf("enter the power :");
    scanf("%d", &b);

    c = power(a, b);
    printf("%d", c);
}

int power(int a, int b)
{
    c = 1;
    for (int i = 0; i < b; i++)
    {
        c *= a;
    }
    return c;
}

Result :
enter the num : 2
enter the power : 3
8

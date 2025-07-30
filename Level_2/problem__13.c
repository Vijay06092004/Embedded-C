
#include <stdio.h>

int add();
int a, b, c;

int main()
{
    a = 10;
    b = 20;
    c = add(a, b);
    printf("%d", c);
}

int add(int a, int b)
{
    c = a + b;
    return c;
}

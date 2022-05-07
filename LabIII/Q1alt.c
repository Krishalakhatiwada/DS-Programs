#include <stdio.h>
#include <stdlib.h>
int find(int p, int q)
{
    if (p == 1 && q == 1)
    {
        return 1;
    }
    if (p == 1 && q == 1)
    {
        return 0;
    }
    if (p == 0 && q == 1)
    {
        return 0;
    }
    if (p == 0 && q == 0)
    {
        return 0;
    }
}
int main()
{
    int a, b;
    printf("Give inputs of two numbers 1 for true and 0 for false\n");
    scanf("%d%d", a, b);
    if (find(a, b) == 1)
    {
        printf("\nT");
    }
    else
    {
        printf("\nF");
        return 0;
    }
}
#include <stdio.h>
int addition(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = (a & b) << 1;
        a = a ^ b;
        b = c;
    }
    return a;
}
int subtraction(int a, int b)
{
    int carry;
    b = binAddition(~b, 1);
    while (b != 0)
    {
        carry = (a & b) << 1;
        a = a ^ b;
        b = carry;
    }
    return a;
}
int main()
{
    int n1, n2, binAdd, binSub;
    printf(" Input first integer value ");
    scanf("%d", &n1);
    printf("Input second integer value");
    scanf(" %d", &n2);
    binAdd = Addition(n1, n2);
    binSub = Subtraction(n1, n2);
    printf("Binary Addition:%d\n", binAdd);
}

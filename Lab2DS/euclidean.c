#include <stdio.h>
int gcd(int num1, int num2)
{
    if (num1 == 0)
    {
        return num2;
    }

    else
    {
        return gcd(num2 % num2, num1);
    }
}

int main()
{
int num1,num2;
    printf("Enter a number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);

    printf("GCD(%d, %d)=%d\n", num1, num2, gcd(num1, num2));
}

#include <stdio.h>
int main()
{
    int a[10], b[10], n1, n2, i, j;
    printf("Enter size of setA:\n");
    scanf("%d", &n1);
    printf("Enter elements of set A\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of set B\n");
    scanf("%d", &n2);
    printf("Enter elements of set B:");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("{");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("(%d ,%d ) ", a[i], b[j]);
        }
    }

    printf("}");
}
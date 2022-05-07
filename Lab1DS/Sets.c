#include <stdio.h>
int main()
{
    int a[10], b[10], c[20], choice, i, j, ab[10];
    printf("Enter choice 1 to find union of sets:\n");
    printf("Enter choice 2 to find intersection of sets:\n");
    printf("Enter choice 3 to find difference between sets:\n");
    printf("Enter choice 4 to find symmetric difference between sets:\n");

    scanf("%d", &choice);
    for (i = 0; i <= 9; i++)
    {
        printf("Enter elements in set A:");
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (i = 0; i <= 9; i++)
    {
        printf("Enter elements in Set B:");
        scanf("%d", &b[i]);
    }
    switch (choice)
    {

    case 1:

        printf("The union of set A and B:");
        for (i = 0; i <= 9; i++)
        {
            c[i] = a[i];
            printf("%d\t", c[i]);
        }
        printf("\n");
        for (i; i <= 19; i++)
        {
            int flag = 1;
            c[i] = b[i - 10];
            for (j = 0; j <= 9; j++)
            {
                if (c[i] == a[j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                printf("%d\t", c[i]);
        }
        break;
    case 2:
        printf("The intersection between set A and set B:\n");
        for (i = 0; i <= 9; i++)
        {
            int flag = 0;
            for (j = 0; j <= 9; j++)
            {
                if (a[i] == b[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                printf("%d\t", a[i]);
            }
        }
        break;
    case 3:
        printf("Difference of set A and set B:\n");
        printf("Enter choice 1 to print A-B:\n");
        printf("Enter choice 2 to print B-A: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("The diffrence between set A and set B(A-B):");
            for (i = 0; i <= 9; i++)
            {
                int flag = 0;
                for (j = 0; j <= 9; j++)
                {
                    if (a[i] == b[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    printf("%d\t", a[i]);
                }
            }
            break;

        case 2:
            printf("The difference between set B and A(B-A):");
            for (i = 0; i <= 9; i++)
            {
                int flag = 0;
                for (j = 0; j <= 9; j++)
                {
                    if (b[i] == a[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    printf("%d\t", b[i]);
                }
            }
        }
        break;
    case 4:
        printf("The symmetric difference of Set A and Set B:");
        for (i = 0; i <= 9; i++)
        {
            c[i] = a[i];
            printf("%d\t", c[i]);
        }
        printf("\n");
        for (i; i <= 19; i++)
        {
            int flag = 1;
            c[i] = b[i - 10];
            for (j = 0; j <= 9; j++)
            {
                if (c[i] == a[j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                printf("%d\t", c[i]);
        }

        for (i = 0; i <= 9; i++)
        {
            int flag = 0;
            for (j = 0; j <= 9; j++)
            {
                if (a[i] == b[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                ab[]
            }
        }
        break;
    }
}

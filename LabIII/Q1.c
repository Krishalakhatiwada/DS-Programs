#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool p[8] = {true, false, true, false, true, false, true, false};
    bool q[8] = {true, true, false, false, true, true, false, false};
    bool r[8] = {true, true, true, true, false, false, false, false};
    int i;
    bool result[8];
    bool result1[8];
    for (i = 0; i < 8; i++)
    {
        result[i] = (p[i] & !q[i] | r[i]);
    }
    for (i = 0; i < 8; i++)
    {
        result[i] = !p[i] | r[i];
    }
    for (i = 0; i < 8; i++)
    {
        if (result[i] == true)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d", 0);
            printf("\n");
        }
    }
   // printf("\n");
    for (i = 0; i < 8; i++)
    {
        if (result[i] == true)
        {
            printf("%d", 1);
        }
        else
        {
            printf("%d", 0);
            printf("\n");
        }
    }
    return 0;
}
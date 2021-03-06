#include <stdio.h>
char getTorF(int val)
{
    if (val)
    {
        return 'T';
    }

    return 'F';
}
int getImpliesResult(int a, int r)
{
    if (a && !r)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int p, q, r, i, flag = 0;
    int s, t, u;
    p = q = r = 0;
    printf("p\tq\tr\t pvq\tp^q->r\t q^~r\t~p\n");
    printf("------------------------------------\n");
    for (i = 0; i < 8; i++)
    {
        printf("%c\t", getTorF(p));
        printf("%c\t", getTorF(q));
        printf("%c\t", getTorF(r));
        s = p || q;
        t = getImpliesResult(p && q, r);
        u = q && !r;
        printf("%c\t", getTorF(s));
        printf("%c\t", getTorF(t));
        printf("%c\t", getTorF(u));
        printf("%c\t", getTorF(p));
        if ((s && t && u) && !p)
        {
            flag = 1;
        }
        (i + 1) % 4 == 0 ? p = !p : 0;
        (i + 1) % 2 == 0 ? q = !q : 0;
        r = !r;
    }
    if (flag)
    {
        printf("\nStatement Verified!!");
    }
    else
    {
        printf("\nStatement not verified!!");
    }
    return 0;
}
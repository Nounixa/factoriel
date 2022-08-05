#include <stdio.h>
int main()
{
    int x, i, f = 1;
    printf("enter un nombre\n");
    scanf("%d", &x);
    if (x == 0)
    {
        printf("%d!=1", x);
    }
    else if (x < 0)
    {
        printf("imposible de calculer dle factoriel de %d", x);
    }
    else
    {
        for (i = 1; i <= x; i++)
        {
            f = f * i;
        }
        printf("le factoriel de %d! est: %d \n", x, f);
    }
    return 0;
}
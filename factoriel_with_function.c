#include <stdio.h>
int factoriel(int x)
{
    int i, f = 1;
    for (i = 1; i <= x; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int x;
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
        printf("le factoriel de %d est: %d \n", x, factoriel(x));
    return 0;
}
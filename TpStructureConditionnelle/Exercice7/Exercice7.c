#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Veuillez entrer 3 entiers : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c )
    {
        if (b>c)
        {
            printf("Max %d\n", a);
            printf("Int %d\n", b);
            printf("Min %d\n", c);
        }
        else if (c>b)
        {
            printf("Max %d\n", a);
            printf("Int %d\n", c);
            printf("Min %d\n", b);
        }

    }
    else if (b>a && b>c)
    {
        if (a>c)
        {
            printf("Max %d\n", b);
            printf("Int %d\n", a);
            printf("Min %d\n", c);
        }
        else
        {
            printf("Max %d\n", b);
            printf("Int %d\n", c);
            printf("Min %d\n", a);
        }

    }
    else if (c>a && c>b )
    {
        if (a>b)
        {
            printf("Max %d\n", c);
            printf("Int %d\n", a);
            printf("Min %d\n", b);
        }
        else
        {
            printf("Max %d\n", c);
            printf("Int %d\n", b);
            printf("Min %d\n", a);
        }
    }



    return 0;
}

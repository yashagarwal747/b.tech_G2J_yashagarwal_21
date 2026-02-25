#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a+b>c && a+ c > b && b + c > a)
    {
        printf("Triangle is possible\n");

        if (a == b && b == c)
        {
            printf("Equilateral Triangle");
        }
        else if (a == b)
        {
            printf("Isosceles Triangle");
        }
        else if (b == c)
        {
            printf("Isosceles Triangle");
        }
        else if (a==c)
        {
            printf("Isosceles Triangle");
        }
        else
        {
            printf("Scalene Triangle");
        }
    }
    else
    {
        printf("Triangle is not possible");
    }

    return 0;
}

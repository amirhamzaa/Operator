#include<stdio.h>

 main()
{
    int x, y, sum, sub, malti;
    float div;

    printf("Enter Number:");
    scanf("%d %d", &x, &y);

    sum = x + y;
    sub = x - y;
    malti = x * y;
    div = (float)x / (float)y;

    printf("The Summation is %d\n", sum);
    printf("The Subtraction is %d\n", sub);
    printf("The Multiplication is %d\n", malti);
    printf("The Division is %f\n", div);

    return 0;
}

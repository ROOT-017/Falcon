//Simple program to fine the perfect number
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a number:");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        printf("%d is Perfect Number", n);
    }
    else
    {
        printf("%d is not Perfect Number ", n);
    }
}
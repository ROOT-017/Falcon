//Simple program to fine the perfect number
#include <stdio.h>

int main()
{
    int n, i, sum = 0;  //n is the number to be checked, i is the counter, sum is the sum of the divisors

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
        printf("%d is Perfect Number", n);    //if the sum of the divisors is equal to the number, it is a perfect number
    }
    else
    {
        printf("%d is not Perfect Number ", n);  //if the sum of the divisors is not equal to the number, it is not a perfect number
    }
}
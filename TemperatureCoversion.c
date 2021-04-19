//Simple C program that convert temperature from one unit to another i.e Fareinhiet,Celcuis and Kelvin
#include <stdio.h>
int main()
{
    float Tc, Tf, Tk, n, k = 0.5555555556;

    printf("   **WELOME TO T-CALCULATOR**\nWhat do you want to convert? \n ");
    printf("2=Tc-TK\n 3=Tk-Tc\n 4=Tf-Tc\n 5=Tc-Tf\n 6=Tk-Tf\n 7=Tf-Tk\n");
    scanf("%f", &n);

    //from celsuis to kelvin.
    if (n == 2)
    {
        printf("Enter temperature in Celcuis\n");
        scanf("%f", &Tc);
        Tk = (Tc + 273);
        printf("The temp in kelvin is:%fK", Tk);
    }

    //FROM kelvin to celsius...
    else if (n == 3)
    {
        printf("Enter the temperatue in kelvin\n");
        scanf("%f", &Tk);
        Tc = (Tk - 273);
        printf("The temperature in Celcius is:%.3f°c", Tc);
    }

    //from farenheit to celsius
    else if (n == 4)
    {
        printf("Enter the temperature in Farenheit\n");
        scanf("%f", &Tf);
        Tc = (Tf - 32) * (k);
        printf("The temperature in Celsius is:%.3f°c", Tc);
    }

    //from celcuis to farenheit
    else if (n == 5)
    {
        printf("Enter the temperature in Celsius:\n");
        scanf("%f", &Tc);
        Tf = (Tc / k) + 32;
        printf("The temperature in Farenheit is:\n%.3fF", Tf);
    }

    //from kelvin to farenheit
    else if (n == 6)
    {
        printf("Enter the temperature in kelvin:\n");
        scanf("%f", &Tk);
        Tf = ((Tk - 273) / k) + 32;
        printf("The temperature in Farenheit is:\n%.3fF", Tf);
    }

    else if (n == 7)
    {
        printf("Enter the temperature in Farenheit:\n");
        scanf("%f", &Tf);
        Tk = ((Tf - 32) * k) - 273;
        printf("The temperature in Kelvin is:\n%.3fK", Tk);
    }

    else
    {
        printf("***INVALID INPUT***");
    }

    return 0;
}

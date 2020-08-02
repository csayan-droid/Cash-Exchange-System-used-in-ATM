#include<stdio.h>
#include<math.h>
int main(void)
{
    int balance, coins = 0  ;
    float c;
    do
    {
        printf("Changes owed in dollar\n");
        scanf("%f",&c);
    }
    while (c < 0);
    int cents = round(c * 100);
    while (cents >= 25) 
    {
        coins ++;
        cents = cents - 25;
    }
    while (cents >= 10)
    {
        coins ++;
        cents = cents - 10;
    }
    while (cents >= 5)
    {
        coins ++;
        cents = cents - 5;
    }
    while (cents >= 1)
    {
        coins ++;
        cents = cents - 1;
    }
    printf("No. of coins: %i\n", coins);
}




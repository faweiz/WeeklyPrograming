// C:Weekly programming 27: Count Coin
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/2/2015
// Prints the number of dollars, quarters, dimes, nickels and pennies on output

#include <stdio.h>
#include <stdlib.h>

int main()
{
         float money = 0.000;

         printf("Enter the number of money: $");
         scanf("%f",&money);

         int dollar = 100;
         int quarter = 25;
         int dime = 10;
         int nickel = 5;
         int penny = 1;

         int cents = money*100.000;
         int totalDollar = (cents / dollar);
         cents %= dollar;
         int totalQuarter = (cents / quarter);
         cents %= quarter;
         int totalDime = (cents / dime);
         cents %= dime;
         int totalNickel = (cents / nickel);
         cents %= nickel;
         int totalPenny = (cents / penny);
         cents %= penny;

         // Print the total number of Pennies + Nickels + Dimes + Quarters + Dollars = Money
         printf("%d Dollars + %d Quarters + %d Dimes + %d Nickels + %d Pennies to get $%.2lf\n", totalDollar,totalQuarter,totalDime,totalNickel,totalPenny,money);


         return 0;
}


/*
int main()
{
    double number = 0.0;
    int penny,nickel,dime,quarter,dollar;
    printf("Enter the amount of Dollar: ");
    scanf("%lf",&number);
   for(penny=0.1;penny<number*10;penny++)
    {
        for(nickel=0.5; nickel<number*10/0.5;nickel++)
        {
            for(dime=1;dime<number*10/1;dime++)
            {
                for(quarter=2.5;quarter<number*10/2.5;quarter++)
                {
                    if(number<=10)
                    {
                        if(penny*0.1 + nickel*0.5 + dime*1 + quarter*2.5 == number *10)
                        {
                            printf("%d penny + %d nickel + %d dime + %d quarter to get $%lf\n", penny,nickel,dime,quarter,number);
                        }
                    }
                    else if(number>10)
                    {
                    for(dollar=10;dollar<number*10/10;dollar++)
                    {
                        if(penny*0.1 + nickel*0.5 + dime*1 + quarter*2.5 + dollar*10 == number *10)
                        {
                            printf("%d penny + %d nickel + %d dime + %d quarter + %d dollar to get %lf\n", penny,nickel,dime,quarter,dollar,number);
                        }
                    }
                    }

                }
            }

        }
    }
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int one, quare, five;
    printf("Enter the amount of Dollar: ");
    scanf("%d",&number);
    for(one=1;one<number*10;one++)
        {
        for(quare=1;quare<number*10/2;quare++)
        {
            for(five=1;five<number*10/5;five++)
            {
                if(one + quare*2 + five*5 == number*10)
                {
                    printf("Make up of %d cents with %d quare and %d to get $%d\n",one,quare,five,number);
                }
            }
        }
    }

    return 0;
}
*/


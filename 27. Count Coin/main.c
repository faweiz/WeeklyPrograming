// C:Weekly programming 27: Count Coin
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/2/2015

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number;
    int penny,nickel,dime,quarter,dollar;
    printf("Enter the amount of Dollar: ");
    scanf("%f",&number);
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
                            printf("%d penny + %d nickel + %d dime + %d quarter to get $%f\n", penny,nickel,dime,quarter,number);
                        }
                    }
                    else if(number>10)
                    {
                    for(dollar=10;dollar<number*10/10;dollar++)
                    {
                        if(penny*0.1 + nickel*0.5 + dime*1 + quarter*2.5 + dollar*10 == number *10)
                        {
                            printf("%d penny + %d nickel + %d dime + %d quarter + %d dollar to get %f\n", penny,nickel,dime,quarter,dollar,number);
                        }
                    }
                    }

                }
            }

        }
    }
    return 0;
}



  /*
        for(quarter=2.5;quarter<number*10/2.5;quarter++)
        {
                if(one + quarter*2.5 == number*10)
                {
                    printf("Make up of %d cents with %d quarter and to get $%d\n",one,quarter,number);
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

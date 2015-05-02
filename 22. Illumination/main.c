// C:Weekly programming 22: Illumination
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: Spring 2014
/*
        Consider a street lit by four street lamps (of C watts each) on lamp posts of h meters high
    that are positioned x meters apart in a straight line, i.e.
        The intensity of illumination L, in candelas, produced by each lamp of height h and power
    C at a point d from the posls t is given by
                                L = (C*h)/((h^2+d^2)^1.5)
        The level of illumination at any one point can therefore be found by adding up the contributions
    of each of the four lamps.
        Write a complete C program that inputs the power of each lamp C, each lamp¡¯s height h,
    their distance apart x, an interval distance i, and then outputs the intensity of illumination
    every i interval on the straight line under the lamps. You will need to use one or more
    routines from math.h; be sure to use the correct ones for your data types! Echo print all
    input. You may assume that i is less than the total distance between all of the lamps, and
    that all measurements are in meters. For simplicity sake you may also assume that each light
    source is exactly h meters directly above a pole¡¯s position, and that the posts themselves do
    not block any light. You should format and label your output exactly like it is done in the
    sample run below (using your name instead of mine).

*/


#include <stdio.h>
#include <stdlib.h>

#include <math.h> // include the math.h header

int main()
{

float c,h,d,i, l;

printf("Proj. #4 - Fawei Zhang\n");
printf("power of lamps (in watt)? ");
scanf("%f",&c);
printf("height of lamp (in meter)? ");
scanf("%f",&h);
printf("distance apart (in meter)? ");
scanf("%f",&d);
printf("interval (in meter)? ");
scanf("%f",&i);

printf("\n");//print a line

printf("power: %.2f watts \n",c);
printf("heigh: %.2f meters \n",h);
printf("distance apart: %.2f meters \n",d);
printf("interval: %.2f meters \n",i);

d *= 3;

printf("d = %f\n i = %f\n",d,i);

printf(" d \t L\n");
printf("-----   ------\n");

do{
    float dd, x,y,z,w;
    dd = i-d;
    x=powf(dd,2);
printf("x: %2f\n",x);
    y=powf(h,2);
//printf("y: %2f\n",y);
    z=x+y;
//printf("z: %2f\n",z);
    w=powf(z,1.5);
//printf("w: %2f\n",w);

l=(c*h)/w;
 printf("%.2f\t%.5f\n",i,l);

 i*=2;
}while(i<=d);

/*
while (i<=d)
{
float x,y,z,w;
x=powf(i,2);
//printf("x: %2f\n",x);
y=powf(h,2);
//printf("y: %2f\n",y);
z=x+y;
//printf("z: %2f\n",z);
w=powf(z,1.5);
//printf("w: %2f\n",w);

l=(c*h)/w;
 printf("%.2f\t%.5f\n",i,l);
 i=i*2;
}*/



    return 0;
}

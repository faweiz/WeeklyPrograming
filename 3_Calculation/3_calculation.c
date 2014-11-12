//C语言：每周1程序03: Calculation
//https://github.com/faweiz
#include <stdio.h>
int main(){
	int a = 20, b = 10, l,o,v,e;
	double c = 10.5, d = 5.5, w,x,y,z;
	//int calculation
	l = a + b;
	o = a - b;
	v = a * b;
	e = a / b;
	printf("Sum is %d\n",l);
	printf("Subtraction is %d\n",o);
	printf("Multiplication is %d\n",v);
	printf("Division is %d\n",e);
	//double calculation
	w = c + d;
	x = c - d;
	y = c * d;
	z = c / d;
	printf("\n");
	printf("Sum is %.2f\n",w);
	printf("Subtraction is %.2f\n",x);
	printf("Multiplication is %.2f\n",y);
	printf("Division is %.2f\n",z);
	return 0;
}

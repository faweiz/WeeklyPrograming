//C:Weekly programming 03: Arithmetic Operator
//https://github.com/faweiz
#include <stdio.h>
int main(){
	int a,b,l,o,v,e,r;
	printf("\n---Integer Calculation---\n");
	printf("Enter 1st number(A):");
	scanf("%d",&a);
	printf("Enter 2nd number(B):");
	scanf("%d",&b);
	l = a + b;
	o = a - b;
	v = a * b;
	e = a / b;
	r = a % b;
	printf("A+B = %d\n",l);
	printf("A-B = %d\n",o);
	printf("A*B = %d\n",v);
	printf("A/B = %d\n",e);
	printf("A%%B = %d\n",r); //use %% to print % sign!
	printf("A++ = %d (Increments)\n",a++);
	printf("--B = %d (Decrements)\n",--b);
	
	float c,d,w,x,y,z;
	printf("\n---Double Calculation---\n");
	printf("Enter 1st number(C):");
	scanf("%f",&c);
	printf("Enter 2nd number(D):");
	scanf("%f",&d);
	w = c + d;
	x = c - d;
	y = c * d;
	z = c / d;
	printf("C+D =  %.2f\n",w);
	printf("C-D = %.2f\n",x);
	printf("C*D = %.2f\n",y);
	printf("C/D = %.2f\n",z);
	return 0;
}
//http://www.faweiz.com

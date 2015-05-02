// C:Weekly programming 04: Relational/Logical Operator (If else) 
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz

#include <stdio.h>
int main(){
	int a,b;
	printf("/*******************************************************************/\n");
	printf("----Relational Operator---\n");
		printf("Enter 1st number(A):");
		scanf("%d",&a);
		printf("Enter 2nd number(B):");
		scanf("%d",&b);
	if( a == b){
		printf("A = B\n");
	}
	else{
		printf("A is not equal to B\n");
		}
	if( a != b){
		printf("A !=B\n");
	}
	else{
		printf("A is equal to B\n");
	}	
	if( a < b){
		printf("A < B\n");
	}
	else{
		printf("A is not less than B\n");
	}
	if( a > b){
		printf("A > B\n");
	}	
	else{
		printf("A is not greater than B\n");
	}
	
	printf("---Logical Operator---\n");
	if( a && b){
		printf("a && b is True\n");
	}
	else if( !(a && b)){
		printf("a && b is False\n");
		printf("!(a && b) is True\n");
	}
	if( a || b){
		printf("a || b is True\n");
	}
	else{
		printf("a || b is False\n");
	}
	
	printf("---Ternary Operator---\n");
	b = (a == 10) ? 10 : 100;
	printf("B = %d\n",b);
	b = (a == 100) ? 10 : 100;
	printf("B = %d\n",b);
	printf("/*******************************************************************/");
	return 0;
}
//http://www.faweiz.com
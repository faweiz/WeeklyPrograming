//C:Weekly programming02: Data Types
//https://github.com/faweiz
#include <stdio.h>
int main(){
	char a;
	double i[10];
	printf("/*******************************************************************/\n");
	printf("sizeof(char) = %d\n",sizeof(char));
	printf("sizeof(a)    = %d\n",sizeof(a));
	printf("sizeof(int)  = %d\n",sizeof(int));
	printf("sizeof(100)  = %d\n",sizeof(100));
	printf("sizeof(float)= %d\n",sizeof(float));
	printf("sizeof(double)= %d\n",sizeof(double));
	printf("sizeof(10.00001)= %d\n",sizeof(10.00001));
	printf("sizeof(double i[10]) = %d\n",sizeof(i));
	printf("/*******************************************************************/\n");
	return 0;
}
//http://www.faweiz.com
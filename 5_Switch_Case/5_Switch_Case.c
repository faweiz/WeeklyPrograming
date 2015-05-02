// C:Weekly programming 05: Switch Case
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz

#include<stdio.h>
int main()
{
	char grade;
	printf("Enter your grade: ");
	scanf("%c",&grade);
	switch(grade)
	{
	case 'A' :
      printf("Excellent!\n");
      break;
	case 'B':
		printf("Good Job!\n");
		break;
	case 'C':
		printf("You passed\n");
		break;
	default:
		printf("Invalid Grade\n");
	}
	printf("Your grade is %c \n",grade);
	return 0;
}
//http://www.faweiz.com
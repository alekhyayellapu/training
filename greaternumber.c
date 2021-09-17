// Print 2 numbers and find which one is bigger

#include<stdio.h>
#include<math.h>
void main()
{
	int number1, number2;
	printf("Enter 2 numbers to find which is bigger:\n");
	scanf("%d%d", &number1, &number2);
	if(number1 > number2)
		printf("%d is greater than %d\n", number1, number2);
	else 
		printf("%d is greater than %d\n", number2, number1);
}
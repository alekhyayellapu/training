// Print the 2 values and find which is bigger by using 2 extra variables

#include<stdio.h>
#include<math.h>
void main()
{
	int number1, number2, temp1, temp2;
	printf("Enter the first number:\n");
	scanf("%d", &number1);
	printf("Enter the second number:\n");
	scanf("%d", &number2);
	if (number1 = number2)
		printf("Both are equal\n");
	if (number1 > number2)
		temp1 = number1;
	else
		temp1 = number2;
	if (number1 < number2)
		temp2 = number1;
	else
		temp2 = number2;
	printf("%d is greater than %d", temp1, temp2);
}
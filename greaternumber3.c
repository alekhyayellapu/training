// Print 2 numbers and find which is bigger by using one extra variable

#include<stdio.h>
#include<math.h>
void main()
{
	int number1, number2, temp;
	printf("Enter 2 numbers to find which is bigger:\n");
	scanf("%d%d", &number1, &number2);
	temp = number2;
	if (number1 = number2)
	{
		printf("both are equal.\n");
	}
	else
	{
		if (number1 < number2)
		{
			number2 = number1; number1 = temp;
		}
	}
	printf("%d is greater than %d\n", number1, number2);
}
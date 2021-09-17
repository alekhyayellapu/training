// Print Multiplication of a given number

#include<stdio.h>
#include<math.h>
void main()
{
	int tableCount, multiplier, product;
	printf("Enter the number for multiplication table:\n");
	scanf("%d", &tableCount);
	for(multiplier = 1; multiplier <= 12; multiplier++)
	{
		product = tableCount * multiplier;
		printf("%d X %d = %d\n", tableCount, multiplier, product);
	}
}
//Print Base to the power of Base

#include<stdio.h>
#include<math.h>
void main()
{
	int base, counter, product;
	printf("Enter the value of base:\n");
	scanf("%d", &base);
	product = base;
	for (counter = 1; counter < base; counter++)
	{
		product = product * base;
	}
	printf("%d to the power of %d is %d.", base, base, product);
	
}
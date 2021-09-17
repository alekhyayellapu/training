//Print 'm' to the power of 'n'

#include<stdio.h>
#include<math.h>
void main()
{
	int base, power, product, counter;
	printf("Enter the value of base:\n");
	scanf("%d", &base);
	printf("Enter the value of power:\n");
	scanf("%d", &power);
	product = base;
	for(counter = 1; counter < power; counter++)
	{
		product = product * base;
	}
	printf("%d to the power of %d is %d\n", base, power, product);
}
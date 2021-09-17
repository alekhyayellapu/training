// Print tables book

#include<stdio.h>
#include<math.h>
void main()
{
	int tableCount, tableCounter, rowCounter, product;
	printf("How many number of tables you want to print?\n");
	scanf("%d", &tableCount);
	for(tableCounter=1; tableCounter <= tableCount; tableCounter++)
	{
		printf("Table Number- %d\n", tableCounter);
		for(rowCounter = 1; rowCounter <= 12; rowCounter++)
		{
			product = tableCounter * rowCounter;
			printf("\n%d X %d = %d\n", tableCounter, rowCounter, product);
		}
	}
}
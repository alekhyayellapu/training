// Print Student names and their Percentages

#include<stdio.h>
#define COUNT 5
#define LENGTH 20
void main()
{
	int marks[COUNT], counter;
	char names[COUNT][LENGTH];
	printf("Enter %d student names and their percentages: \n", COUNT);
	for(counter = 0; counter < COUNT; counter++)
	{
		printf("Enter name-%d of %d students: ", counter + 1, COUNT);
		scanf("%s", names[counter]);
		printf("Enter student- %d percentage: \n", counter + 1);
		scanf("%d", &marks[counter]);
	}
	printf("\nPercentages of %d Students are: \n", COUNT);
	for(counter = 0; counter < COUNT; counter++)
	{
		printf("Percentage of %s is %d.\n", names[counter], marks[counter]);
	}
}
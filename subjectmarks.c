// Read and Print the Marks Of Subjects

#include <stdio.h>
#define COUNT 5
void main()
{
	int marks[COUNT], counter;
	printf("Enter marks of %d subjects:\n", COUNT);
	for (counter = 0; counter < COUNT; counter++)
	{
		printf("Enter subject- %d marks: \n", counter + 1);
		scanf("%d", &marks[counter]);
	}
	printf("\nMarks of %d subjects are:\n", COUNT);
	for (counter = 0; counter < COUNT; counter++)
	{
		printf("subject- %d marks are: %d\n", counter + 1, marks[counter]);
	}
}
// Print number series 1, 4, 27, 256... upto 'n' terms

#include <stdio.h>
#include <math.h>
void main()
{
	int countOfTerms, termCounter, counter, term;
	printf("How many terms do you want?\n");
	scanf("%d", &countOfTerms);
	for(termCounter = 1; termCounter <= countOfTerms; termCounter++)
	{
		for (counter = 1; counter <= termCounter; counter++)
		{
			term = term * termCounter;
		}
		printf("%d", term);
	}
	if (termCounter < countOfTerms)
		printf(",");
	else
		printf(".");
}
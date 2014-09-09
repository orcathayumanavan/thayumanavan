/*chapter-8, example-3*/
/*thayumanavan, september 2014*/

/*more on calling function*/

#include<stdio.h>

void printmessage(void)
{
	printf("programming is fun.\n");
}

int main(void)
{
	int i;

	for(i = 1; i <= 5; ++i)
		printmessage();

	return 0;
}
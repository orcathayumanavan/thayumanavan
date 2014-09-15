/* chapter 6 - exercise 5 */
/* thayumanavan, sep 2014
/* printing the number reversely */

#include<stdio.h>
int main(void)
{
	int number,number1=0;
	printf("enter any number");
	scanf("%i",&number);
	
	
	while(number>0)
	{
		number1=number1 * 10 + number%10;
		number=number/10;
	}
		printf("the reverse number is%i",number1);
	return 0;


}


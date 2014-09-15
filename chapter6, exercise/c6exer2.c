/* chapter 6 - exercise 4 */
/* thayumanavan, sep 2014*/

/* program for dividing two numbers */

#include<stdio.h>

int main(void)
{	
	/variable declaration

	float a,b;
	float c;

	printf("enter two numbers:\n");
	scanf("%f %f",&a,&b);
	c=a/b;
	printf("the answer is %f",c);
	return 0;
}
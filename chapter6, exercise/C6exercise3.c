/* chapter 6 - exercise 3 */
/* thayumanavan,sep 2014 */
/* program for dividing two numbers */

# include<stdio.h>

int main(void)
{
	float a,b,c;
	printf("enter two integer values:\n");
	scanf("%f%f",&a,&b);
	c=a/b;
	printf("%.3f %.3f",c);
	return 0;
}
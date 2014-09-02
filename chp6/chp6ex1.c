/* chapter 6 example 1
 * thayumanavan , august 2014
// Program to calculate the absolute value of an integer*/

int main(void)
{

	int number;
	
	printf("Type in your number: ");
	scanf("%i", &number);

	if( number < 0 )
	    number = -number;

	printf("The absolute value is %i\n", number);

	return 0;
}
/* chapter 3 example 6
 * thayumanavan , august 2014
*/
/* this program adds two integer values
   and displays the result             */

#include<stdio.h>

int main(void)
{
	//declare variables
	int value1, value2, sum;

	//assign values and calculate their sum
	value1 = 50;
	value2 = 25;
	sum = value1 + value2;
	//display the result
	printf("the sum of %1 and %i is %i\n", value1, value2, sum);

	return 0;
}
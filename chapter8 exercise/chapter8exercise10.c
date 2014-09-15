/* chapter8, exercise10 */
/* thayumanavan, september 2014 */

/* checking prime */
 
 int prime(int a)
 {
 	int i;
 	
 	for(i = 2; i <= 9; i++)
 	{
 		if(a % i == 0)
 		{
 			return 0;
 		}
 		else
 		{
 			return 1;
 		}
 	}
 }
 
 int main(void)
 {
 	int a;

 	prime(17);

 }

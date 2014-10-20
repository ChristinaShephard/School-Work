/* Shephard, Christina
ID: 103310660
Lab 3
Date: 08.10.2014
Purpose: A program that reads in a four or five digit integer number and determines whether it is a palindrome number or not.
 */

# include <stdio.h>

int main()
{
   //Declaring variables
   int pal;
	int num1, num2, num3, num4; 

   //User prompt
	printf ("Please enter a 4 or 5 digit integer palindrome: ");
	scanf ("%d", &pal);

   //Checking if the sumbitted integer is valid (4-5 digits long). Does not account for leading 0s.
	if ((pal <= 999) || (pal > 99999))
	{
		printf ("Your entry is invalid!!!\n");
   }

   else
   {
      //Checking if it is 4 digits long
   	if ((pal > 999) && (pal <= 9999))
	   {
	      num1 = ((pal/1000)%10);
	     	num2 = ((pal/100)%10);
	     	num3 = ((pal/10)%10);
	     	num4 = ((pal/1)%10); 
      }

      //Checking if it is 5 digits long
      else
   	{
   	   num1 = ((pal/10000)%10);
   	   num2 = ((pal/1000)%10);
   	  	num3 = ((pal/10)%10);
   	  	num4 = (pal%10); 
      }
   
      //Checking if it is a palindrome
      if ((num1 == num4) && (num2 == num3))  
      {
         printf ("%d is a palindrome!\n", pal);
   	}

      else
      {
         printf ("%d is not a palindrome!\n", pal);
      }
   }
	return 0;
}

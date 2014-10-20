/* Shephard, Christina
   ID: 103310660
   Lab 3
   Date: 08.10.2014
   Purpose: A program that prompts the user to enter an integer number between 1 and 10 and validates the input and prints proper messages.
*/

# include <stdio.h>

int main()
{
   int num;

   //User prompt
   printf ("Please enter an integer between 1 and 10:\n");
   scanf ("%d", &num);

   //Checking if it is valid (between 1 and 10 (assuming it includes 1 and 10))
   if ((1 <= num) && (num <= 10))
   {
      printf ("You have entered a valid entry, Goodbye!\n");
   }
   
   //If it isn't any number from 1 to 10, it is invalid
   else
   {
      printf ("You have entered an invalid entry!!!\n");
   }


   return 0;
}

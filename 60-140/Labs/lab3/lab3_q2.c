/* Shephard, Christina
   ID: 103310660
   Lab 3
   Date: 08.10.2014
   Purpose: Reads a single character from the user as follows:
  
   ‘y’ or ‘Y’ for YES
   ‘n’ or ‘N’ for NO
   Invalid entry otherwise
*/

# include <stdio.h>

int main()
{

   char ans;

   //User prompt
   printf ("Please answer with yes or no:\n");
   scanf ("%c", &ans);

   //Checking if it is 'y' or 'Y'
   if ((ans == 'y') || (ans == 'Y'))
   {
      printf ("You responded Yes!\n");
   }

   //Checking if it is 'n' or 'N'
   else if (( ans == 'n') || (ans == 'N'))
   {
      printf ("You responded No!\n");
   }

   //If it's none of the above, it's not valid
   else 
   {
      printf ("Your entry is invalid!!!\n");
   }

   return 0;
}

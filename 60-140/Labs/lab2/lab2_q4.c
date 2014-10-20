/* Shephard, Christina
   ID: 103310660
   Lab 2
   Date: 01.10.2014
   Purpose: A program that inputs one five-digit number, separates the number into its individual digits and prints the digits separated from one another by three spaces each.
*/

#include <stdio.h>

int main()
   {
 
      int num0; 
      int num1;
      int num2;
      int num3;
      int num4;
      int num5;

      printf ("Please enter a five digit number:\n");
      scanf ("%d", &num0);

      num1 = ((num0/10000)%10);
      num2 = ((num0/1000)%10);
      num3 = ((num0/100)%10);
      num4 = ((num0/10)%10);
      num5 = (num0%10); 

      printf ("The digits of %d are %d   %d   %d   %d   %d\n", num0, num1, num2, num3, num4, num5 );


      return 0;
   }







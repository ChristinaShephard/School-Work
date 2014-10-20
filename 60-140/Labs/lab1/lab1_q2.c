/* Shephard, Christina
   ID: 103310660
   Lab 1
   Date: Sep 24, 2014
   Purpose:
*/

#include <stdio.h>

int main()

   {
      int num; //Number entered by the use
      int quo; //Quotient
      int rem; //Remainder
      
      printf("Please enter a positive integer:\n"); //prompt
      scanf("%d", &num); //read an integer
      
      quo = num / 3;
      rem = num % 3;
      
      printf("The quotient of %d/3 is: %d\nThe remainder of %d/3 is: %d\n", num, quo, num, rem);
      

      return 0;
   }

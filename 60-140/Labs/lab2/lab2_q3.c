/* Shephard, Christina
   ID: 103310660
   Lab 2
   Date: 01.10.2014
   Purpose: A program that reads in two integers and determines and prints if the first is a multiple of the second.
*/

#include <stdio.h>

int main()
   {
      int int1;
      int int2;

      printf ("Please enter two integers:\n");
      scanf ("%d %d", &int1, &int2);

      if (int1%int2 == 0)
      {
         printf("%d is a multiple of %d\n", int1, int2);
      }

      else
      {
         printf("%d is not a multiple of %d\n", int1, int2);
      }


      return 0;
   }







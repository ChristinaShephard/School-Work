/* Shephard, Christina
   ID: 103310660
   Lab 2
   Date: 01.10.2014
   Purpose: A program that reads an integer and determines and prints whether it is odd or even.
*/

#include <stdio.h>

int main()
   {

      int int1;

      printf ("Please enter an integer:\n");
      scanf ("%d", &int1);

      if (int1%2 == 0)
      {
         printf ("%d is even!\n", int1);
      }

      else if (int1%2 == 1)
      {
         printf ("%d is odd!\n", int1);
      }

      return 0;
   }

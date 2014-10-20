/* Shephard, Christina
   ID: 103310660
   Lab 2
   Date: 01.10.2014
   Purpose: A program that reads in five integers and then determines and prints the largest and the smallest integers in the group.
*/

#include <stdio.h>

int main()
   {

      int int1;
      int int2;
      int int3;
      int int4;
      int int5;
      int intmax;
      int intmin;

      printf  ("Please enter five integers:\n");
      scanf ("%d %d %d %d %d", &int1, &int2, &int3, &int4, &int5);

      if ((int1 >= int2) && (int1 >= int3) && (int1 >= int4) && (int1 >= int5))
      {
         intmax = int1;
      }
      
      else if ((int2 >= int1) && (int2 >= int3) && (int2 >= int4) && (int2 >= int5))
      {
         intmax = int2;
      }

      else if ((int3 >= int1) && (int3 >= int2) && (int3 >= int4) && (int3 >= int5))
      {
         intmax = int3;
      }

      else if ((int4 >= int1) && (int4 >= int2) && (int4 >= int3) && (int4 >= int5))
      {
         intmax = int4;
      }

      else if ((int5 >= int1) && (int5 >= int2) && (int5 >= int3) && (int5 >= int4))
      {
         intmax = int5;
      }

      if ((int1 <= int2) && (int1 <= int3) && (int1 <= int4) && (int1 <= int5))
      {
         intmin = int1;
      }
      
      else if ((int2 <= int1) && (int2 <= int3) && (int2 <= int4) && (int2 <= int5))
      {
         intmin = int2;
      }

      else if ((int3 <= int1) && (int3 <= int2) && (int3 <= int4) && (int3 <= int5))
      {
         intmin = int3;
      }

      else if ((int4 <= int1) && (int4 <= int2) && (int4 <= int3) && (int4 <= int5))
      {
         intmin = int4;
      }

      else if ((int5 <= int1) && (int5 <= int2) && (int5 <= int3) && (int5 <= int4))
      {
         intmin = int5;
      }

      printf ("The Max is : %d\nThe Min is : %d\n", intmax, intmin);


      return 0;
   }

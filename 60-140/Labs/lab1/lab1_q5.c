/* Shephard, Christina
   ID: 103310660
   Lab 1
   Date: Sep 24, 2014
   Purpose:
*/

#include <stdio.h>

int main()

   {
      int a;
      int b;
      int c;
      int sum;
      int avg;
      
      printf("Please enter three integers:\n");
      scanf("%d %d %d", &a, &b, &c);
      sum = a + b + c;
      avg = sum / 3;
      printf("Their sum is: %d\nTheir Average is: %d\n", sum, avg);
      
      return 0;
   }

/* Shephard, Christina
   ID: 103310660
   Lab 1
   Date: Sep 24, 2014
   Purpose:
*/

#include <stdio.h>

int main()

   {

      int x;
      int f;
      int g;
      float h;

      printf("Please enter a value for integer x:\n");
      scanf("%d", &x);
      f = -2*x + 5;
      g = x*x*x + 2*x - 4;
      h = (3.0*x + 2.0) / (2*x - 4);

      printf("\tf(%d) = -2(%d) + 5\t\t= %d\n", x, x, f);
      printf("\tg(%d) = (%d)^3 + 2(%d) - 4\t\t= %d\n", x, x, x, g);
      printf("\th(%d) = (3(%d)+2) / (2(%d)-4)\t= %.2f\n", x, x, x, h);
      
      return 0;
   }

/* Shephard, Christina
   ID: 103310660
   Lab
   Date:
   Purpose: 
*/
#include <stdio.h>

int main()
   {
      float temp1;
      float temp2;
      float f_temp;
      float c_temp;

      printf("Please enter a temperature in Celsius:\n");
      scanf("%f", &temp1);
      
      f_temp = temp1 * 1.8 + 32;

      printf("%.0f Celcius = %.0f Fahrenheit\n", temp1, f_temp);

      printf("Please enter a temperature in Fahrenheit:\n");
      scanf("%f", &temp2);

      c_temp = (temp2 - 32) / 1.8;

      printf("%.0f Fahrenheit = %.0f Celcius\n", temp2, c_temp);

      
      return 0;
   }

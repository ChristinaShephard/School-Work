/* Shephard, Christina
   ID: 103310660
   Lab 01
   Date: Sep 24, 2014
   Purpose: This is a program which promts the user for their first name, and       repeats back a greeting using the submitted name. 
*/

#include <stdio.h>

int main()
   {
      char name[30];
      printf( "What is your first name?\n" );
      scanf("%s", name);
      printf( "Hello %s, how are you?\nI hope you feel 100%% today!\n", name);

      return 0;
   }

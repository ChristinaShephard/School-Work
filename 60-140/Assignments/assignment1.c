/* 
   Shephard, Christina
   ID: 103310660
   Assignment 1: A Simple Children's Game 
   Date: 06.10.2014
   Purpose: A program that reads five digits and outputs the largest integer that can be made from the given digits.
*/

#include <stdio.h>

//Function to compare two integers, and return the largest
int max(int x, int y) 
{
   int result;
 
   if (x >= y)
      result = x;
   else
      result = y;
 
   return result; 
}

//Dun dun dun... The main function! 
int main()
{

   //Declaring variables
   int num1;
   int num2;
   int num3;  
   int num4;
   int num5;
   int maxnum;

   //Initializing maxnum.
   maxnum = 0;

   // Prompt, and collecting five digits.
   printf ("Please enter five digits:\n");
   scanf ("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

   /* A loop that finds the current largest number, and adds it to the end of maxnum.
   Replaces the largest number with a sentinel value of -1. 
   Ends when all numbers have been replaced with sentinels.*/
   while (max(max(max(max(num1,num2),num3),num4),num5) != -1)
   {
      if (max(max(max(max(num1,num2),num3),num4),num5) == num1)
      { 
         maxnum = maxnum * 10 + num1;
         num1 = -1; 
      }

      else if (max(max(max(max(num1,num2),num3),num4),num5) == num2)
      { 
         maxnum = maxnum * 10 + num2;
         num2 = -1;
      }

      else if (max(max(max(max(num1,num2),num3),num4),num5) == num3)
      {
         maxnum = maxnum * 10 + num3;
         num3 = -1;
      }

      else if (max(max(max(max(num1,num2),num3),num4),num5) == num4)
      { 
         maxnum = maxnum * 10 + num4;
         num4 = -1;
      }

      else if (max(max(max(max(num1,num2),num3),num4),num5) == num5)
      {
         maxnum = maxnum * 10 + num5;
         num5 = -1;
      }

   }

   // Prints the result of the loop, which is the largest possible integer that can be composed of the chosen digits.
   printf("Largest integer that can be composed of the chosen digits: %d\n", maxnum);

   return 0;
}

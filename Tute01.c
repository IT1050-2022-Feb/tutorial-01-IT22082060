/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   inn num1, num2, avg;
   printf("Enter first subject mark :");
   scanf("%d", &num1);
   
   printf("Enter first subject mark :");
   scanf("%d", &num2);
   
   avg= (num1+num2)/2;
   
   printf("Average of the two marks is : %d", avg);
   
   
  
  return 0;
}


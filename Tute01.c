/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
   float ave;
   printf("enter mark 1 : ");
   scanf("%d",&mark1);
   printf("enter mark 2 : ");
   scanf("%d",&mark2);
   ave=(mark1+mark2)*0.5;
   printf("average mark is %.2f",ave);
     
  return 0;
}


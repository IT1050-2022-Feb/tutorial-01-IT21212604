
/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() { //start main function
  int mark1, mark2; //declare variables
  float avg;
  printf("enter mark 1 :");  //dsplay enter mark 1
  scanf("%d", &mark1);   //enter mark from keyboard
  printf("enter mark 2:");  //display enter mark 2
  scanf("%d", &mark2);   //enter mark from keyboard
  avg = (mark1 + mark2)/2.0;  //calculate average
  printf("average is %.2f", avg);  //print average

      
  return 0;
} //end of main function


/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {  //start main function
  int i, no, sum=0, val; //declare variables
  printf("enter the no of numbers :"); //display enter no of numbers
  scanf("%d", &no); //enetr the no from keyboard
  for(i=1; i<=no; i++){
    
    sum += i;
  }
  
  printf("sum of numbers : %d", sum); //print sum
  return 0;
}  //end of main function


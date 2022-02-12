/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int no1,int no2);
int maximum(int no1, int no2);
int multiply(int no1, int no2);

int main() {
   int no1, no2;
   int min,max, mul;
   printf("Enter a value for no 1 : "); //display enter no
   scanf("%d", &no1);  //enter no from keyboard
   printf("Enter a value for no 2 : ");  //display enter no
   scanf("%d", &no2); //enter no from keyboard
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   
   return 0;
}
int minimum(int no1,int no2)
{
  if(no1<no2){
    return no1;
  }
  else
  return no2;
}
int maximum(int no1,int no2)
{
  if(no1>no2{
    return no1;
  }
  else
    return no2;
}
int multiply(int no1,int no2)
{
  int mul = 0;
  mul = no1*no2;
  return mul;
}

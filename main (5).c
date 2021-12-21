/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main(void)
{ 
 int num, rem, prod = 1;
 printf("Enter a number: ");
 scanf("%d", &num);
 while(num != 0)
 {
 rem = num % 10; 
 prod *= rem;
 num /= 10;
 }
 printf("%d", prod);
 return 0;
}

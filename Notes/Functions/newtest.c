
#include<stdio.h> 

int main() 
{ 
   int *ptr1, *ptr2, num1 = 10, num2 = 10; 
   
ptr1 = & num1;
ptr2 = & num2;

printf("%d %d\n", *ptr1, *ptr2);
if ( *ptr1 == *ptr2 ) printf ("TRUE");
else printf ("FALSE");


   return 0; 
}

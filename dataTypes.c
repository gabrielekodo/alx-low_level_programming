#include<stdio.h>

int main(void)
{

int n;
int *p;
n=98;
p=&n;

printf("Address of 'n': %p\n",&n);
printf("Value of 'p': %p\n",p);

/* int n; 

   printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
   printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
   printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
   printf("Size of type of my variable n on my computer: %lu bytes\n", sizeof(n));
 
 */
 
/*  char c;
   int n;

   printf("Address of variable 'c': %p\n", &c);
   printf("Address of variable 'n': %p\n", &n);
  
  */
/*
int *p;
printf("Size of pointer: %lu\n",sizeof(p));

printf("Address of variable 'p' : %p\n",&p);
*/   
return (0);

}	

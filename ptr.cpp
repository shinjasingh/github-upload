#include <stdio.h> 
  
int main() 
{ 
    int x; 
    x=5;
    int *y=&x;
  
   printf("x=%d\n",*y); 
    printf("address of x=%p", y); 
  
    return 0; 
} 


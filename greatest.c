#include<stdio.h>
int main()
{
    int a , b , c;
  
  printf("Enter value of a");
  scanf("%d",&a);
  
  printf("Enter value of b");
  scanf("%d",&b);
  
  printf("Enter value of c");
  scanf("%d",&c);
  
  if( a>=b || a>=c)
  printf("value of a is greater %d");
 // scanf("%d",&a);
  
  if ( b>=a || b>=c )
 printf("value of b is greater %d");
 // scanf("%d",&b);
  
  if ( c>=a || c>=b)   
  printf("value of c is greater %d");
 // scanf("%d",&c);
  
  return 0;
}

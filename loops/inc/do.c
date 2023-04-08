#include<stdio.h>
int main()
{
   int i;
   int n;
   int sum = 0;

   printf("Enter the value of n");
   scanf("%d",&n);

   do{
    printf("sum of n natural no. is %d\n",sum);
   i++; 
   }while(sum = sum + i);

    return 0;
}
#include<stdio.h>
int main()
{int fact=1;
int n;

printf("Enter the value :");
scanf("%d",&n);

    for(int i=1; i<=n; i++){
   fact = fact * i;
    }
    printf("final factorial is %d\n",fact);
   
return 0;
}
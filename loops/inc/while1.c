#include<stdio.h>
int main()
{ 
   /* int i;
    while(i<=10){
    printf("the value is %d\n",i);
    i++;
    }*/

    int i=0;
    int n;
    printf("Enter the value ");
    scanf("%d\n",&n);

    while (i<=n){
    printf("value of n is %d\n",i);
    i++;
    }
    return 0;
}
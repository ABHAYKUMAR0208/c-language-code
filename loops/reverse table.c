#include<stdio.h>
int main()

{
    int n;
    printf("Enter the value :");
    scanf("%d\n",&n);

    for(int i=10; i>=1; i--){
    printf("%d\n",n * i);
    }
   
return 0;
}
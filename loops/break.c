#include<stdio.h>
int main()
{
   // int i;
    int n;
    do{
        printf("Enter any value :");
        scanf("%d\n",&n);
        printf("%d\n",n);

        if(n % 7 == 0){
        break;
        }
    }while(1);
   printf("Bye");
return 0;
}
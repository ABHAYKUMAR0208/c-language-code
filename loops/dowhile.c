#include<stdio.h>
int main()
{ 
    int i;
    int n;

    printf("Enter the value of i\n");
    scanf("%d",&n);

    do{
        printf("The value is %d\n",i++);
        i++;
    }
    while(i<=10);
    return 0;
}
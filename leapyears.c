#include <stdio.h>
int main()
{
    int year;

    printf("Enter Year\n");
    scanf("%d",&year);

    if(( year % 400 || year % 100 || year % 4)==0)
    printf("Year is Leap Year %d\n",year);

    else {
    printf("Year is not a Leap Year %d\n",year);
    }
    return 0;
}
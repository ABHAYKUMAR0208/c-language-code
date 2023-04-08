#include<stdio.h>
int main()
{
    char character;
    printf("Enter the character\n");
    scanf("%c",&character);

    if(character<=122 && character>=97)
    printf("It is lowercase");

    else{
        printf("It is Upperecase");
    }
return 0;
}
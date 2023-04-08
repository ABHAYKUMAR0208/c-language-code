/*#include<stdio.h>
int main()
{
int sum = 0;
for(int i=5; i<=50; i++){
    sum += i;
}
printf("%d\n",sum);

   
return 0;
}*/

#include<stdio.h>
int main()
{int n;
    printf("enter the number");
    scanf("%d",&n);

    int sum = 0;
    for(int i=0; i<=n; i++){
    sum = sum + i;
    }
printf("vaule is %d\n",sum);

return 0;
}


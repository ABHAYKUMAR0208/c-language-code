#include<stdio.h>
void Nate();
void Bonjour();

int main(){
    printf("Conrfirm your nationality by F and I :");
    char ch;
    scanf("%c",&ch);

      if (ch =='i'){
         Namaste();

     }
     else{
         Bonjour();
      }
    return 0;
}


void Namaste()
{printf("Namaste\n");
}

void Bonjour()
{printf("Bonjour\n");
}

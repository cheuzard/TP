#include<stdio.h>

int main()
{ 
int i;
int j;

    for (i=0; j<20; i++){
        
        for (j=0; j<i; j++){
            printf(" ");
        }
        printf("*\n");
    }
    for(i = 0; i<20; i++){
        printf(" ");
    }
    printf("salam\n");

    for(i = 0;i<20;i++){

        for(j=0; j<20-i; j++){
            printf(" ");
        }
        printf("*\n");
    }

  return 0;
}
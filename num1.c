#include<stdio.h>

int main()
{ 
int i;
int j;

    for (i=0; j<10; i++){
        
        for (j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("salam\n");

    while(i>0 ){
        for(j=0; j<i-1; j++){
            printf("*");
        }
        i=i-1;
        printf("\n");
    }

  return 0;
}
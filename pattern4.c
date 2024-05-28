#include<stdio.h>

float main(){
    int num1;
    printf("ENter the no of rows : ");
    scanf("%d",&num1);

    for(int i=0;i<num1;i++){
        for(int j=0;j < num1 - i;j++){
            printf("*");
        }
        printf("\n");
    }
        for (int i = 1; i < num1; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        
    }


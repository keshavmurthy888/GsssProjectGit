#include<stdio.h>

int main(){
    int num1;
    printf("Enter the no of rows : ");
    scanf("%d",&num1);
    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num1-i; j++)
        {
            printf("*");   
        }
        printf("\n");
    }    
}
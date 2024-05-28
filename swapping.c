#include<stdio.h>

void swap(int * a,int * b){
    int temp; //10
    temp = *a; //*(&a) -> *(1004h) ->20
    *a = *b; //*(&b) -> *(2009h) -> 10 
    *b = temp; // 10 -> &b 
}

int main(){
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);

    printf("Enter the value of b : ");
    scanf("%d",&b);

    printf("Befor swapping value of a is %d and b is %d\n",a,b);

    swap(&a,&b);

    printf("After swapping value of a is %d and b is %d",a,b);
}
#include<stdio.h>

int main(){
    int size,i;
    printf("Enter array size : ");
    scanf("%d",&size);

    int arr[size],sum=0;

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d array element : ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum is : %d",sum);
}
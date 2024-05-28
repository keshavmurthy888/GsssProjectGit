#include<stdio.h>
int main(){
   int size; 
   printf("Enter the size of tha array :");
   scanf("%d",&size); 
   int arr[size];

// Inserting array elements:
   for(int i=0;i<size;i++){
    printf("Enter the %d array elemnt : ",i+1);
    scanf("%d",&arr[i]);
   }

//    Dispaly
for (int i = 0; i < size; i++)
{
    printf("The element at %d position is : %d\n",i+1,arr[i]);
}

}
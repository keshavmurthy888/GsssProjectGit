#include<stdio.h>

// Function with no arguements and no return type
void add(){
    int num1,num2;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&num1,&num2);
    int res = num1 + num2;
    printf("Sum is : %d",res);
}

// Function with arguments with no return type
void sub(int a,int b){
    int res = a - b;
    printf("Difference is : %d",res);
}

// Function with no arguements but return type
int mul(){
    int num1,num2;
    printf("Enter 2  Numbers : ");
    scanf("%d%d",&num1,&num2);
    return num1 * num2;
}


// Function with arguements and return type
int div(int num1,int num2){
    int res = num1/num2;
    return res;
}

int main(){
    int choice,num1,num2,res;
    printf("Press 1 For Add\nPress 2 for Subtract\nPress 3 for multiplication\nPress 4 for Divistion\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice){
        case 1: add();
                break;

        case 2:printf("Enter 2  numbers : ");
               scanf("%d%d",&num1,&num2); 
               sub(num1,num2);
               break;
        
        case 3: res=mul();
                printf("Result of the product is : %d",res);
                break;

        case 4:printf("Enter 2  numbers : ");
               scanf("%d%d",&num1,&num2); 
               res = div(num1,num2);
               printf("The Qu0tient is : %d",res);
               break;
        
        default:printf("Invalid Option");
                break;

    }

}
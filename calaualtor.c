#include<stdio.h>

int res = 0;
int count=0;

void add(int x,int y){
    res = x+y;
}

void sub(int x,int y)
{
    res = x - y;
}

void mul(int x,int y){
    res = x * y;
}

void div(int x,int y){
    res = x/y;
}

void display(){
    printf("The result of all the operstions is : %d",res);
}

int main(){
    int num1,num2,choice,exitchoice,flag = 1;
    while(flag == 1)
    {
        printf("Enter the  operation to be performed : \n");
        printf("Press 1 For Add\nPress 2 For Sub\nPress 3 For Multiplatication\nPress 4 For Division\nPrees 5 for Result\nPress 6 for Exit");

        scanf("%d",&choice);

    switch (choice)
    {
        case 1:
                if(count == 0){
                    printf("Enter any 2 numbers : ");
                    scanf("%d %d",&num1,&num2);
                    add(num1,num2);
                    count++;
                }
                else{
                    printf("Enter the number");
                    scanf("%d",&num1);
                    add(res,num1);
                }
                break;
    
        case 2:
                if(count == 0){
                    printf("Enter any 2 numbers : ");
                    scanf("%d %d",&num1,&num2);
                    sub(num1,num2);
                    count++;
                }
                else{
                    printf("Enter the number : ");
                    scanf("%d",&num1);
                    sub(res,num1);
                }
                break;

        case 3:
                if(count == 0){
                    printf("Enter any 2 numbers : ");
                    scanf("%d %d",&num1,&num2);
                    mul(num1,num2);
                    count++;
                }
                else{
                    printf("Enter the number : ");
                    scanf("%d",&num1);
                    mul(res,num1);
                }
                break;
        
        case 4: 
                if(count == 0){
                    printf("Enter any 2 numbers : \n");
                    scanf("%d %d",&num1,&num2);
                    div(num1,num2);
                    count++;
                }
                else{
                    printf("Enter the number : ");
                    scanf("%d",&num1);
                    div(res,num1);
                }
                break;
        case 5:
                display();
                break;

        default:
            printf("Invalid option\nDo you wish to Continue\n");
            printf("If Yes Press 1 else Press 2");
            scanf("%d",&exitchoice);
            if(exitchoice == 1)
            {
                continue;
            }
            else{
                flag = 0;
            }
            break;
    }
 }
}

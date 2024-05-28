#include<stdio.h>
#include<stdlib.h>

int accno = 12345678,password = 1234,balance = 0;
char name[50] = "Ramya";
int age = 24; 

void accinfo(){
    printf("Name is : %s ",name);
    printf("The Age is :  %d",age);

}

void dispaly(){
    printf("The Current balance is : %d\n",balance);     
}

void withdrawl(){
    int tempwithdraw,disp;
    printf("Enter the amount to withdraw : ");
    scanf("%d",&tempwithdraw);
    if(tempwithdraw > balance){
        printf("Insufficeient funds !!! ");
    }
    else{
        balance = balance - tempwithdraw;
        printf("Do you want to display the balance \n");
        printf("If Yes Press 1\nIf No Press Any number : ");
        scanf("%d",&disp);
        if(disp == 1){
            dispaly();
        }
        else{
            printf("Thankyou for Banking with Us !!! ");
            exit(0);
        }
    }
}

void savings(){
    int tempsave,choiceopt;
    printf("Enter the amount to be deposited : ");
    scanf("%d",&tempsave);

    balance = balance + tempsave;

    printf("The amount is credited to ur bank with %d ",tempsave);
    printf("To view your balance \nPress 1 for Yes  \nPress 2 for No");
    scanf("%d",&choiceopt);
    if(choiceopt == 1){
        dispaly();
    }
    else{
         printf("Thankyou for Banking with Us !!! ");
        }
}

int main(){
    int tempaccno,temppass,choice,count=0,exitoption,choiceexit;

    while(count < 3)
    {
    printf("Enter the accno : ");
    scanf("%d",&tempaccno);
    printf("Enter the passowrd : ");
    scanf("%d",&temppass);

    if(tempaccno == accno && temppass == password){
        printf("********************************\n");
        printf("       Welcome %s To GSSS Bank      \n",name);
        printf("********************************\n");
        printf("\n");
        printf("Enter what operations to be done\nPress 1 For Account Information\n Press 2 for Balance\n2.Press 3 for Withdrawl\nPress 4 for Deposit\nPress 5 for Logout");

        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            accinfo();
            break;

        case 2:
            dispaly();
            break;
        
        case 3:
            withdrawl();
            break;

        case 4:
            savings();
            break;

        default:
            printf("Invalid Option !!!! \n");
            printf("Do You wish to Continue \n");
            printf("If Yes Press 1\nIf No Press 2");
            scanf("%d",&exitoption);
            if(exitoption == 1){
                continue;
            }
            else{
                printf("Thank You For Visiting !!!");
                exit(0);
            }
            break;
        }
           
    }
    else{
        count+=1;
        printf("Invalid Credentials");
        printf("Do you wnat continue\nPress 1 for Continue\nPess 2 for exit");
        scanf("%d",&choiceexit);
        if(choiceexit == 1){
            continue;
        }
        else{
            printf("Thank You For Visiting !!!");
            exit(0);
        }
    }
}
}
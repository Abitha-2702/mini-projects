#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct user{
    char name[20];
    char pwd[10];
    int balance;
    int deposit[10];
    int withdraw[10];
};
struct user user1={"Abi","12345",0};

int d_i=0,w_i=0;

int pass(){
    printf("\n\n\t\tPlease Enter your password: ");
    char pin[10];
    // int i=0;
    // char ch;
    // while((ch=getchar())!='\r' && i<5){
    //     putchar('*');
    //     pin[i++]=ch;
    // }
    // while((ch=_getchar())!=6){
    //     pin[i]=ch;
    //     i++;
    //     printf("*");
    // }
    // pin[i]='\0';
    // while(getchar()!='\n');
    scanf("%s",pin);
    if(strcmp(pin,user1.pwd)==0)
        return 1;
    else
        return 0;
}

void dep(){
    system("cls");
    if(d_i<=10){
    if(pass()){
        printf("\n\t\tWelcome %s",user1.name);
        printf("\n\t\tEnter deposit amount: ");
        int dep;
        scanf("%d",&dep);
        user1.balance+=dep;
        user1.deposit[d_i++]=dep;
    }
    }
    else
        printf("\n\t\tToday's deposit's limit is exceded\n");
}

void withdr(){
    system("cls");
    if(w_i<=10){
    if(pass()){
        system("cls");
        printf("\n\t\tWelcome %s",user1.name);
        printf("\n\t\tEnter Withdrawal amount: ");
        int wd;
        scanf("%d",&wd);
        user1.balance-=wd;
        user1.withdraw[w_i++]=wd;
    }
    }
    else
        printf("\n\t\tToday's withdrawal's limit is exceded\n");
}

void balance(){
    system("cls");
    if(pass()){
        system("cls");
        printf("\n\t\tWelcome %s\n",user1.name);
        printf("\n\t\tBalance amount: %d\n",user1.balance);
    }
}

void history(){
    system("cls");
    if(pass()){
        system("cls");
        printf("\n\t\tDeposits\tWithdrawals\n");
        for(int i=0;i<d_i||i<w_i;i++)
            printf("\t\t%d\t\t%d\n",user1.deposit[i],user1.withdraw[i]);
    }
}

void pinchange(){
    system("cls");
    if(pass()){
        system("cls");
        printf("\n\t\tEnter new password: ");
        scanf("%s",user1.pwd);
    }
}

int main()
{
    int ch;
    printf("\n\n\t\t\t\t**************************\n");
    printf("\t\t\t\t| Welcome to ATM Machine |");
    printf("\n\t\t\t\t**************************\n");
    while(1){
        printf("\n\t\t1.Deposit\n\t\t2.Withdrawal\n\t\t3.Balance enquiry\n\t\t4.Transaction history\n\t\t5.Pinchange\n\t\t6.Exit\n\t\tEnter your choice: ");
        if(scanf("%d",&ch)==1){
            switch(ch){
                case 1:dep();
                       break;
                case 2:withdr();
                       break;
                case 3:balance();
                       break;
                case 4:history();
                       break;
                case 5:pinchange();
                       break;
                case 6:return 0;
                default:printf("\n\t\tINVALID CHOICE\n\n");
            }
        }
        else{
            while(getchar()!='\n');
            printf("\n\n\t\tENTER ONLY NUMBERS\n\n");
            system("cls");
        }
    }

    return 0;
}

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int option = 0;
    float input = 0;
    float currentBalance = 1000;
    
    
    while(option!=5){
        printf("\n\n===============================\n\t    MY ATM\n===============================\n");
        printf(" 1. Check Balance\n 2. Deposit money \n 3. Withdraw money \n 4. Show account information \n 5. Exit\n=============================== ");
        printf("\nChoose an option\n|");
        scanf("%d", &option);
        
        
        
        
        switch(option){
        
            case 1:
                printf("\n===============================\n\t BALANCE CHECK\n===============================");
                printf("\nYour current balance is %.2f", currentBalance);
                option = 0;
                break;
            case 2:
                printf("\n===============================\n\t    DEPOSIT\n===============================");
                puts("\n|How much would you like to deposit?");
                scanf("%f", &input);
                currentBalance += input;
                printf("\n$%.2f deposited. \nYour current balance is $%.2f", input, currentBalance);
                option = 0;
                break;
            case 3:
                printf("\n===============================\n\t   WITHDRAWAL\n===============================");
                puts("\nHow much would you like to withdraw?\n");
                scanf("%f", &input);
                
                if (input == 0){
                    printf("Invalid amount.\nYour current balance is $%.2f",currentBalance);
                }
                else if (input > currentBalance){
                    printf("Insuficient funds.\nYour current balance is $%.2f",currentBalance);
                }
                else{
                    currentBalance -= input;
                    printf("\n$%.2f withdrawn. \nYour current balance is $%.2f", input, currentBalance);
                    option = 0;
                }
                break;
            case 4:
                printf("\n===============================\n\tACCOUNT INFORMATIONS\n===============================");
                printf("User: John William\nAccount Number: 12345678\nAgency Number: 1234");
                option = 0;
                break;
            case 5:
                printf("\n===============================\n\t    LEAVING...\n===============================\nProcess finished.");
                break;
            
            default:
                printf("Invalid Option. Please choose an option of 1 to 5.");
                break;
        }
    }
}
#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account a;
    float deposit;

    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);

    printf("Enter Name: ");
    scanf(" %c", a.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);

    a.balance += deposit;

    printf("\nAccount Number : %d\n", a.accNo);
    printf("Name : %s\n", a.name);
    printf("Current Balance : %.2f\n", a.balance);

    return 0;
}
#include <stdio.h>

struct Ticket
{
    char name[50];
    int seat;
};

int main()
{
    struct Ticket t;

    printf("Enter Passenger Name: ");
    scanf(" %c", t.name);

    printf("Enter Seat Number: ");
    scanf("%d", &t.seat);

    printf("\n--- Ticket ---\n");
    printf("Passenger : %s\n", t.name);
    printf("Seat Number : %d\n", t.seat);
    printf("Status : Booked\n");

    return 0;
}
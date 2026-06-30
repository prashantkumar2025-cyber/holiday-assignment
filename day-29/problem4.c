#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int qty;
    float price;
};

int main()
{
    struct Item item;

    printf("Enter Item ID: ");
    scanf("%d", &item.id);

    printf("Enter Item Name: ");
    scanf(" %c", item.name);

    printf("Enter Quantity: ");
    scanf("%d", &item.qty);

    printf("Enter Price: ");
    scanf("%f", &item.price);

    printf("\n----- Inventory -----\n");
    printf("ID       : %d\n", item.id);
    printf("Name     : %s\n", item.name);
    printf("Quantity : %d\n", item.qty);
    printf("Price    : %.2f\n", item.price);
    printf("Total Value = %.2f\n", item.qty * item.price);

    return 0;
}
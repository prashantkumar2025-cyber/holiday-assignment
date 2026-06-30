#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    do
    {
        printf("\n1.Length\n2.Copy\n3.Concat\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Length = %lu\n", strlen(str1));
            break;

        case 2:
            strcpy(str2, str1);
            printf("Copied String = %s\n", str2);
            break;

        case 3:
            printf("Enter second string: ");
            scanf(" %[^\n]", str2);
            strcat(str1, str2);
            printf("Concatenated String = %s\n", str1);
            break;

        case 4:
            printf("Exit\n");
            break;

        default:
            printf("Invalid Choice\n");
        }

    } while (choice != 4);

    return 0;
}
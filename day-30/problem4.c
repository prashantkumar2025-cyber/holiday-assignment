#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n = 0, choice, i;

    do
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Roll No: ");
                scanf("%d", &s[n].roll);

                printf("Name: ");
                scanf(" %c", s[n].name);

                printf("Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Records Found!\n");
                }
                else
                {
                    printf("\nStudent Records\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nRoll  : %d", s[i].roll);
                        printf("\nName  : %s", s[i].name);
                        printf("\nMarks : %.2f\n", s[i].marks);
                    }
                }
                break;

            case 3:
            {
                int roll, found = 0;

                printf("Enter Roll Number: ");
                scanf("%d", &roll);

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == roll)
                    {
                        printf("\nStudent Found");
                        printf("\nName  : %s", s[i].name);
                        printf("\nMarks : %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Student Not Found!\n");

                break;
            }

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
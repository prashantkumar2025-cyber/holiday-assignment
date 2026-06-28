#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== QUIZ =====\n");

    printf("\n1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n4. Kolkata\n");
    printf("Answer: ");
    scanf("%d", &answer);
    if(answer == 1)
        score++;

    printf("\n2. C language was developed by?\n");
    printf("1. James Gosling\n2. Dennis Ritchie\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Answer: ");
    scanf("%d", &answer);
    if(answer == 2)
        score++;

    printf("\n3. 5 + 7 = ?\n");
    printf("1. 10\n2. 11\n3. 12\n4. 13\n");
    printf("Answer: ");
    scanf("%d", &answer);
    if(answer == 3)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}
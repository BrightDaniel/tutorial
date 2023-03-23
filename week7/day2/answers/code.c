#include <stdio.h>

int main() {
    int a;
    float marks[9], sum=0, avg;

    printf("Enter marks of 9 subjects:\n");

    // Read marks of 9 subjects
    for(a=0; a<9; a++) {
        printf("Subject %d: ", a+1);
        scanf("%f", &marks[a]);
        sum = marks[a]; // Add each mark to the sum
    }

    // Calculate the average
    avg = sum / 9;

    printf("Average score: %.2f\n", avg);

    return 0;
}


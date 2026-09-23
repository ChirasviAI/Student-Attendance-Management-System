#include <stdio.h>

int main() {
    int total, attended;
    float percentage;

    printf("Enter total number of classes: ");
    scanf("%d", &total);

    printf("Enter number of classes attended: ");
    scanf("%d", &attended);

    percentage = ((float)attended / total) * 100;

    printf("\nAttendance Percentage = %.2f%%\n", percentage);

    if (percentage >= 75)
        printf("Status: Eligible\n");
    else
        printf("Status: Not Eligible\n");

    return 0;
}

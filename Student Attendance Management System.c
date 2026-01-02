#include <stdio.h>

int main() {
    int n, i;
    int attendance[50];
    int present = 0, absent = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input attendance
    for(i = 0; i < n; i++) {
        printf("Enter attendance for student %d (1 = Present, 0 = Absent): ", i + 1);
        scanf("%d", &attendance[i]);
    }

    // Display attendance
    printf("\nAttendance Record:\n");
    for(i = 0; i < n; i++) {
        if(attendance[i] == 1) {
            printf("Student %d: Present\n", i + 1);
            present++;
        } else {
            printf("Student %d: Absent\n", i + 1);
            absent++;
        }
    }

    // Display count
    printf("\nTotal Present Students: %d", present);
    printf("\nTotal Absent Students: %d", absent);

    return 0;
}

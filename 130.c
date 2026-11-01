#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        struct Student s;
        printf("Enter name, roll number, marks: ");
        scanf("%s %d %f", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    struct Student s;
    printf("\nStored records:\n");
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    return 0;
}
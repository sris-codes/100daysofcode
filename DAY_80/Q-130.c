#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    FILE *fp;
    struct Student s;
    int n, i;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Writing student records
    for (i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", s.name);

        printf("Enter roll number: ");
        scanf("%d", &s.roll);

        printf("Enter marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    // Reading student records
    fp = fopen("student.txt", "r");

    printf("\n--- Student Records ---\n");

    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3)
    {
        printf("\nName: %s", s.name);
        printf("\nRoll Number: %d", s.roll);
        printf("\nMarks: %.2f\n", s.marks);
    }

    fclose(fp);

    return 0;
}
#include <stdio.h>

int main()
{
    FILE *fp;
    char text[100];

    fp = fopen("info.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Enter a line of text: ");
    fgets(text, 100, stdin);

    fputs(text, fp);

    printf("Text appended successfully!");

    fclose(fp);

    return 0;
}